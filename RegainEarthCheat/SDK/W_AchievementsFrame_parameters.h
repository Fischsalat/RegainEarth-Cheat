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

// Function W_AchievementsFrame.W_AchievementsFrame_C.OnMouseButtonDown
struct UW_AchievementsFrame_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.ActiveWidget
struct UW_AchievementsFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.OnHovered
struct UW_AchievementsFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.PreConstruct
struct UW_AchievementsFrame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.ClearAchievementList
struct UW_AchievementsFrame_C_ClearAchievementList_Params
{
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.AddAchivement
struct UW_AchievementsFrame_C_AddAchivement_Params
{
	class UTexture2D*                                  AvatarTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               AchievmentUnlocked_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ToolTip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.Play2ndSound
struct UW_AchievementsFrame_C_Play2ndSound_Params
{
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.StartAudio
struct UW_AchievementsFrame_C_StartAudio_Params
{
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.ExecuteUbergraph_W_AchievementsFrame
struct UW_AchievementsFrame_C_ExecuteUbergraph_W_AchievementsFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_AchievementsFrame.W_AchievementsFrame_C.OnCountingNumbersFinished__DelegateSignature
struct UW_AchievementsFrame_C_OnCountingNumbersFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
