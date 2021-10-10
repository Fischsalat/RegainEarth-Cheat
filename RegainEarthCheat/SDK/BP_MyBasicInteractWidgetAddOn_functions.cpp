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

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetTypes_E_WidgetTypes> Widget_Type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Widget_Type(TEnumAsByte<E_WidgetTypes_E_WidgetTypes>* Widget_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Type");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget_Type != nullptr)
		*Widget_Type = params.Widget_Type;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title_Text                     (Parm, OutParm)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Title");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Sub Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Sub_Title_Text                 (Parm, OutParm)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Sub Title");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Sub_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Sub_Title_Text != nullptr)
		*Sub_Title_Text = params.Sub_Title_Text;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Level_Text                     (Parm, OutParm)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Widget_Level(bool* Return_Value, struct FText* Level_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Level");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Level_Text != nullptr)
		*Level_Text = params.Level_Text;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Amount_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Widget_Amount(bool* Return_Value, int* Amount_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Amount");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Amount_Value != nullptr)
		*Amount_Value = params.Amount_Value;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Color");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Key Binds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_ActionAndKeysBind> Key_Binds                      (Parm, OutParm)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_ActionAndKeysBind>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Key Binds");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 1");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 2");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 3");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 4");

	ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MyBasicInteractWidgetAddOn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.UserConstructionScript");

	ABP_MyBasicInteractWidgetAddOn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Toggle Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MyBasicInteractWidgetAddOn_C::Toggle_Widget(bool Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Toggle Widget");

	ABP_MyBasicInteractWidgetAddOn_C_Toggle_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MyBasicInteractWidgetAddOn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ReceiveBeginPlay");

	ABP_MyBasicInteractWidgetAddOn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetTitleVisibleAndSetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_MyBasicInteractWidgetAddOn_C::SetTitleVisibleAndSetTitleText(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetTitleVisibleAndSetTitleText");

	ABP_MyBasicInteractWidgetAddOn_C_SetTitleVisibleAndSetTitleText_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Clear Target and Stop Show Widget
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MyBasicInteractWidgetAddOn_C::Clear_Target_and_Stop_Show_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Clear Target and Stop Show Widget");

	ABP_MyBasicInteractWidgetAddOn_C_Clear_Target_and_Stop_Show_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Start Display Widget Set Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Start_Display_Widget_Set_Current_Target(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Start Display Widget Set Current Target");

	ABP_MyBasicInteractWidgetAddOn_C_Start_Display_Widget_Set_Current_Target_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetActionNameForInputKeySearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKeyName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::SetActionNameForInputKeySearch(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetActionNameForInputKeySearch");

	ABP_MyBasicInteractWidgetAddOn_C_SetActionNameForInputKeySearch_Params params;
	params.ActionKeyName = ActionKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetActionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_MyBasicInteractWidgetAddOn_C::SetActionText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetActionText");

	ABP_MyBasicInteractWidgetAddOn_C_SetActionText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ParentActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::ParentActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ParentActor");

	ABP_MyBasicInteractWidgetAddOn_C_ParentActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::Interact(const struct FKey& Key, class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Interact");

	ABP_MyBasicInteractWidgetAddOn_C_Interact_Params params;
	params.Key = Key;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ExecuteUbergraph_BP_MyBasicInteractWidgetAddOn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MyBasicInteractWidgetAddOn_C::ExecuteUbergraph_BP_MyBasicInteractWidgetAddOn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ExecuteUbergraph_BP_MyBasicInteractWidgetAddOn");

	ABP_MyBasicInteractWidgetAddOn_C_ExecuteUbergraph_BP_MyBasicInteractWidgetAddOn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
