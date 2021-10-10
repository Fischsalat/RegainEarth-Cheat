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

// Function W_ParentWidget.W_ParentWidget_C.Construct
struct UW_ParentWidget_C_Construct_Params
{
};

// Function W_ParentWidget.W_ParentWidget_C.ActiveWidget
struct UW_ParentWidget_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ParentWidget.W_ParentWidget_C.OnHovered
struct UW_ParentWidget_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentWidget.W_ParentWidget_C.AllButtonsPressedEvents
struct UW_ParentWidget_C_AllButtonsPressedEvents_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentWidget.W_ParentWidget_C.OnBack
struct UW_ParentWidget_C_OnBack_Params
{
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentWidget.W_ParentWidget_C.OnInitialized
struct UW_ParentWidget_C_OnInitialized_Params
{
};

// Function W_ParentWidget.W_ParentWidget_C.ExecuteUbergraph_W_ParentWidget
struct UW_ParentWidget_C_ExecuteUbergraph_W_ParentWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentWidget.W_ParentWidget_C.OnHoveredButtons__DelegateSignature
struct UW_ParentWidget_C_OnHoveredButtons__DelegateSignature_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_ParentWidget.W_ParentWidget_C.OnPressedButtons__DelegateSignature
struct UW_ParentWidget_C_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
