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

// BlueprintGeneratedClass AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C
// 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
class AAI_Base_Enemy_Controller_WithBlackBoard2_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AAI_Character_Base_Enemy_Pawn_C*             SelfControlledPawn;                                        // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C");
		return ptr;
	}



	void GetMindControlled(bool* IsMindControlled, float* DurationLeft, float* DurationComplete, float* MindControlSkillLevelOfController);
	void SetMindControlled(bool SetToIsMindControlled, float Duration, float MindControllerSkillLevel, bool* PassedMindControllingChange_);
	void GetDirectionAngleYaw(float* Z___Yaw);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ReceiveBeginPlay();
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_AI_Base_Enemy_Controller_WithBlackBoard2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
