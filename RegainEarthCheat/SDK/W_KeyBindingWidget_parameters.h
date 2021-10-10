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

// Function W_KeyBindingWidget.W_KeyBindingWidget_C.Set Action Text
struct UW_KeyBindingWidget_C_Set_Action_Text_Params
{
	struct FS_ActionAndKeysBind                        Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_KeyBindingWidget.W_KeyBindingWidget_C.Set Key Bind Text Key Press Widget
struct UW_KeyBindingWidget_C_Set_Key_Bind_Text_Key_Press_Widget_Params
{
	struct FS_ActionAndKeysBind                        Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
