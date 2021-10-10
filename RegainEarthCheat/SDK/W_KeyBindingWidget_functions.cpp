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

// Function W_KeyBindingWidget.W_KeyBindingWidget_C.Set Action Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ActionAndKeysBind    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_KeyBindingWidget_C::Set_Action_Text(const struct FS_ActionAndKeysBind& Array, bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeyBindingWidget.W_KeyBindingWidget_C.Set Action Text");

	UW_KeyBindingWidget_C_Set_Action_Text_Params params;
	params.Array = Array;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_KeyBindingWidget.W_KeyBindingWidget_C.Set Key Bind Text Key Press Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ActionAndKeysBind    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeyBindingWidget_C::Set_Key_Bind_Text_Key_Press_Widget(const struct FS_ActionAndKeysBind& Array, bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeyBindingWidget.W_KeyBindingWidget_C.Set Key Bind Text Key Press Widget");

	UW_KeyBindingWidget_C_Set_Key_Bind_Text_Key_Press_Widget_Params params;
	params.Array = Array;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
