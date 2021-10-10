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

// Function WB_ChapterText.WB_ChapterText_C.SetFontInfoType
struct UWB_ChapterText_C_SetFontInfoType_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ChapterText.WB_ChapterText_C.SetTextType
struct UWB_ChapterText_C_SetTextType_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_ChapterText.WB_ChapterText_C.IsDescriptionTextEmpty
struct UWB_ChapterText_C_IsDescriptionTextEmpty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_ChapterText.WB_ChapterText_C.SetFontInfoDescription
struct UWB_ChapterText_C_SetFontInfoDescription_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ChapterText.WB_ChapterText_C.SetFontInfoHeadline
struct UWB_ChapterText_C_SetFontInfoHeadline_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ChapterText.WB_ChapterText_C.SetTextDescription
struct UWB_ChapterText_C_SetTextDescription_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_ChapterText.WB_ChapterText_C.SetTextHeadline
struct UWB_ChapterText_C_SetTextHeadline_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_ChapterText.WB_ChapterText_C.SetTextColor
struct UWB_ChapterText_C_SetTextColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ChapterText.WB_ChapterText_C.OnHovered
struct UWB_ChapterText_C_OnHovered_Params
{
};

// Function WB_ChapterText.WB_ChapterText_C.Construct
struct UWB_ChapterText_C_Construct_Params
{
};

// Function WB_ChapterText.WB_ChapterText_C.OnClicked
struct UWB_ChapterText_C_OnClicked_Params
{
};

// Function WB_ChapterText.WB_ChapterText_C.OnUnhovered
struct UWB_ChapterText_C_OnUnhovered_Params
{
};

// Function WB_ChapterText.WB_ChapterText_C.PreConstruct
struct UWB_ChapterText_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ChapterText.WB_ChapterText_C.OnDisabled
struct UWB_ChapterText_C_OnDisabled_Params
{
};

// Function WB_ChapterText.WB_ChapterText_C.ExecuteUbergraph_WB_ChapterText
struct UWB_ChapterText_C_ExecuteUbergraph_WB_ChapterText_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
