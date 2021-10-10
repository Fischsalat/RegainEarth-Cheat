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

// Function W_AchievementsFrame.W_AchievementsFrame_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_AchievementsFrame_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.OnMouseButtonDown");

	UW_AchievementsFrame_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_AchievementsFrame.W_AchievementsFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_AchievementsFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.ActiveWidget");

	UW_AchievementsFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AchievementsFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.OnHovered");

	UW_AchievementsFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_AchievementsFrame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.PreConstruct");

	UW_AchievementsFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.ClearAchievementList
// (BlueprintCallable, BlueprintEvent)
void UW_AchievementsFrame_C::ClearAchievementList()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.ClearAchievementList");

	UW_AchievementsFrame_C_ClearAchievementList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.AddAchivement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              AvatarTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           AchievmentUnlocked_            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 ToolTip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_AchievementsFrame_C::AddAchivement(class UTexture2D* AvatarTexture, const struct FString& Name, bool AchievmentUnlocked_, const struct FString& ToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.AddAchivement");

	UW_AchievementsFrame_C_AddAchivement_Params params;
	params.AvatarTexture = AvatarTexture;
	params.Name = Name;
	params.AchievmentUnlocked_ = AchievmentUnlocked_;
	params.ToolTip = ToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.Play2ndSound
// (BlueprintCallable, BlueprintEvent)
void UW_AchievementsFrame_C::Play2ndSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.Play2ndSound");

	UW_AchievementsFrame_C_Play2ndSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.StartAudio
// (BlueprintCallable, BlueprintEvent)
void UW_AchievementsFrame_C::StartAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.StartAudio");

	UW_AchievementsFrame_C_StartAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.ExecuteUbergraph_W_AchievementsFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AchievementsFrame_C::ExecuteUbergraph_W_AchievementsFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.ExecuteUbergraph_W_AchievementsFrame");

	UW_AchievementsFrame_C_ExecuteUbergraph_W_AchievementsFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AchievementsFrame.W_AchievementsFrame_C.OnCountingNumbersFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_AchievementsFrame_C::OnCountingNumbersFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AchievementsFrame.W_AchievementsFrame_C.OnCountingNumbersFinished__DelegateSignature");

	UW_AchievementsFrame_C_OnCountingNumbersFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
