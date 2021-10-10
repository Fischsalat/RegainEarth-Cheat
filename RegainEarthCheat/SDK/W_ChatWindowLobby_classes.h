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

// WidgetBlueprintGeneratedClass W_ChatWindowLobby.W_ChatWindowLobby_C
// 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
class UW_ChatWindowLobby_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     Button_Sent;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            ChatEntrySubmitTextBox;                                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ChatLogScrollBox;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ChatWindowLobby.W_ChatWindowLobby_C");
		return ptr;
	}



	void UpdateChatWindowWithOneNewMessage(const struct FText& Sender, const struct FText& Text, class APlayerController* OwnerPlayerControllerOfChatMessage);
	void OnTextCommitted_Event_1(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void Construct();
	void SentMessageToServerAndReplicateToClients(const struct FText& TextToSend);
	void BndEvt__Button_Sent_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1181_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void ExecuteUbergraph_W_ChatWindowLobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
