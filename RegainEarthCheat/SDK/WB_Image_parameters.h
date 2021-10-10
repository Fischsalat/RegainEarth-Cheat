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

// Function WB_Image.WB_Image_C.SetVignetteColor
struct UWB_Image_C_SetVignetteColor_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Image.WB_Image_C.SetImageColor
struct UWB_Image_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Image.WB_Image_C.UpdateSaturation
struct UWB_Image_C_UpdateSaturation_Params
{
	float                                              Saturation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Image.WB_Image_C.FindTextureSize
struct UWB_Image_C_FindTextureSize_Params
{
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Image.WB_Image_C.SetImageTranslation
struct UWB_Image_C_SetImageTranslation_Params
{
	struct FVector2D                                   Translation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Image.WB_Image_C.SetImageBrush
struct UWB_Image_C_SetImageBrush_Params
{
	class UObject*                                     Brush;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Image.WB_Image_C.OnHovered
struct UWB_Image_C_OnHovered_Params
{
};

// Function WB_Image.WB_Image_C.Construct
struct UWB_Image_C_Construct_Params
{
};

// Function WB_Image.WB_Image_C.OnClicked
struct UWB_Image_C_OnClicked_Params
{
};

// Function WB_Image.WB_Image_C.OnUnhovered
struct UWB_Image_C_OnUnhovered_Params
{
};

// Function WB_Image.WB_Image_C.PreConstruct
struct UWB_Image_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Image.WB_Image_C.OnDisabled
struct UWB_Image_C_OnDisabled_Params
{
};

// Function WB_Image.WB_Image_C.ExecuteUbergraph_WB_Image
struct UWB_Image_C_ExecuteUbergraph_WB_Image_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
