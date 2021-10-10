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

// BlueprintGeneratedClass BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PlayerChakaterPawnInterfaces_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C");
		return ptr;
	}



	void SetPlayerSpectatorCamBackToDefaultCam();
	void SetPlayerCamToSpectatorOnlyForNonLocalPlControlled();
	void TriggerReadAndSetNewMouseSettingsSensitivity();
	void SetPlayerBackFromDeadToUnconBleedOut_OnSrv();
	void GetPlayerCameraManager(class APlayerCameraManager** PlayerCamManager);
	void SetInventoryItemCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, int Set_to_specfic_count, bool Set_to_Max_Stack_Size, bool Only_Add_when_Item_already_in_inventory_at_least_with_0, bool PlayPickupSound_, bool Should_Player_be_informed, bool* Done_fine_);
	void Get_Vector_and_Rot_in_View_Line(float Distance_in_front, bool* Done_fine_, struct FTransform* TransformLocVecRot);
	void GetFullInventoryWithAllItemDetails(bool Get_also_Items_with_count_zero_, TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>>* GetItemCategories, int* Count_of_different_Items_in_Result_Array, bool* Found_Items_Without_Errors_, TArray<struct FItemDataStructF>* Inventory_Full);
	void CheckGetItemFirstTime(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> SearchItemID, bool* Is_New_);
	void GetInventoryItemAndCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool Get_also_Items_with_count_zero_, TArray<struct FInventorySlotStructB>* InventoryNOTAsReference, int* Count_of_different_Items_in_Result_Array, bool* Found_Item_, int* FoundOnIndex, struct FInventorySlotStructB* FoundInventoryItemSlotStruct, struct FItemDataStructF* FoundInventoryItemFullDetails);
	void PickUpItemToInventory(int CountToChangeAddOrRemove, TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool InformPlayerWithMessage, bool* WasInventoryPickupFine_, bool* InventoryWasFull_, bool* NotAbleToRemove_CountToLess_, int* NewItemCount);
	void GetActivePlayerCamera(class UCameraComponent** ActiveCamera);
	void Active_Crosshair();
	void Deactivate_Crosshair();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
