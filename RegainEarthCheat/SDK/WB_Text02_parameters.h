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

// Function WB_Text02.WB_Text02_C.SetIconPlayers
struct UWB_Text02_C_SetIconPlayers_Params
{
	class UObject*                                     Icon_38_x_39;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Text02.WB_Text02_C.SetTextPlayers
struct UWB_Text02_C_SetTextPlayers_Params
{
	struct FText                                       TextPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Text02.WB_Text02_C.SetFontInfoType
struct UWB_Text02_C_SetFontInfoType_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Text02.WB_Text02_C.SetTextType
struct UWB_Text02_C_SetTextType_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Text02.WB_Text02_C.IsDescriptionTextEmpty
struct UWB_Text02_C_IsDescriptionTextEmpty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Text02.WB_Text02_C.SetFontInfoDescription
struct UWB_Text02_C_SetFontInfoDescription_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Text02.WB_Text02_C.SetFontInfoHeadline
struct UWB_Text02_C_SetFontInfoHeadline_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Text02.WB_Text02_C.SetTextDescription
struct UWB_Text02_C_SetTextDescription_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Text02.WB_Text02_C.SetTextHeadline
struct UWB_Text02_C_SetTextHeadline_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Text02.WB_Text02_C.SetTextColor
struct UWB_Text02_C_SetTextColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Text02.WB_Text02_C.OnHovered
struct UWB_Text02_C_OnHovered_Params
{
};

// Function WB_Text02.WB_Text02_C.Construct
struct UWB_Text02_C_Construct_Params
{
};

// Function WB_Text02.WB_Text02_C.OnClicked
struct UWB_Text02_C_OnClicked_Params
{
};

// Function WB_Text02.WB_Text02_C.OnUnhovered
struct UWB_Text02_C_OnUnhovered_Params
{
};

// Function WB_Text02.WB_Text02_C.PreConstruct
struct UWB_Text02_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Text02.WB_Text02_C.OnDisabled
struct UWB_Text02_C_OnDisabled_Params
{
};

// Function WB_Text02.WB_Text02_C.ExecuteUbergraph_WB_Text02
struct UWB_Text02_C_ExecuteUbergraph_WB_Text02_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
