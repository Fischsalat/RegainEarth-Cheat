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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PMM_Instance.BP_PMM_Instance_C
// 0x0061 (FullSize[0x0209] - InheritedSize[0x01A8])
class UBP_PMM_Instance_C : public UGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               bShowMouse;                                                // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x01B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8PWO[0x6];                                     // 0x01B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    UpdateInputType;                                           // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bPauseMenuActive;                                          // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NBLV[0x7];                                     // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWB_PauseMenu_C*                             WB_PauseMenu;                                              // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     PlayerCharacter;                                           // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseBaseColor;                                             // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R9JW[0x3];                                     // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                BaseColor;                                                 // 0x01E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseButtonSounds;                                          // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0BLV[0x3];                                     // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ButtonSound_Hovered;                                       // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ButtonSound_Clicked;                                       // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableSetResolutionManually;                              // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PMM_Instance.BP_PMM_Instance_C");
		return ptr;
	}



	void FindGradations(const struct FLinearColor& In_Color, struct FLinearColor* _01, struct FLinearColor* _02, struct FLinearColor* _03, struct FLinearColor* _04);
	void FindPawnOrCharacter(class UObject* Object, class ACharacter** AsCharacter, class APawn** AsPawn);
	void SetShowMouse(bool bShowMouse);
	void SetInputType(TEnumAsByte<EInputType_EInputType> InputType);
	void ReceiveInit();
	void HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType);
	void HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer);
	void HandlePauseMenu(class UObject* Player_Character_or_Pawn, bool Set_Game_Paused);
	void UpdateBaseColor();
	void UpdateButtonSounds();
	void ExecuteUbergraph_BP_PMM_Instance(int EntryPoint);
	void UpdateInputType__DelegateSignature(TEnumAsByte<EInputType_EInputType> InputType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
