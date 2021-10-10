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

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerSpectatorCamBackToDefaultCam
struct UBPI_PlayerChakaterPawnInterfaces_C_SetPlayerSpectatorCamBackToDefaultCam_Params
{
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerCamToSpectatorOnlyForNonLocalPlControlled
struct UBPI_PlayerChakaterPawnInterfaces_C_SetPlayerCamToSpectatorOnlyForNonLocalPlControlled_Params
{
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.TriggerReadAndSetNewMouseSettingsSensitivity
struct UBPI_PlayerChakaterPawnInterfaces_C_TriggerReadAndSetNewMouseSettingsSensitivity_Params
{
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerBackFromDeadToUnconBleedOut_OnSrv
struct UBPI_PlayerChakaterPawnInterfaces_C_SetPlayerBackFromDeadToUnconBleedOut_OnSrv_Params
{
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetPlayerCameraManager
struct UBPI_PlayerChakaterPawnInterfaces_C_GetPlayerCameraManager_Params
{
	class APlayerCameraManager*                        PlayerCamManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetInventoryItemCount
struct UBPI_PlayerChakaterPawnInterfaces_C_SetInventoryItemCount_Params
{
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Set_to_specfic_count;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Set_to_Max_Stack_Size;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Only_Add_when_Item_already_in_inventory_at_least_with_0;   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlayPickupSound_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Should_Player_be_informed;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Done_fine_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Get Vector and Rot in View Line
struct UBPI_PlayerChakaterPawnInterfaces_C_Get_Vector_and_Rot_in_View_Line_Params
{
	float                                              Distance_in_front;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Done_fine_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  TransformLocVecRot;                                        // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetFullInventoryWithAllItemDetails
struct UBPI_PlayerChakaterPawnInterfaces_C_GetFullInventoryWithAllItemDetails_Params
{
	bool                                               Get_also_Items_with_count_zero_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>> GetItemCategories;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Count_of_different_Items_in_Result_Array;                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_Items_Without_Errors_;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FItemDataStructF>                    Inventory_Full;                                            // (Parm, OutParm)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.CheckGetItemFirstTime
struct UBPI_PlayerChakaterPawnInterfaces_C_CheckGetItemFirstTime_Params
{
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            SearchItemID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_New_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetInventoryItemAndCount
struct UBPI_PlayerChakaterPawnInterfaces_C_GetInventoryItemAndCount_Params
{
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Get_also_Items_with_count_zero_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FInventorySlotStructB>               InventoryNOTAsReference;                                   // (Parm, OutParm)
	int                                                Count_of_different_Items_in_Result_Array;                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_Item_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FoundOnIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventorySlotStructB                       FoundInventoryItemSlotStruct;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemDataStructF                            FoundInventoryItemFullDetails;                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.PickUpItemToInventory
struct UBPI_PlayerChakaterPawnInterfaces_C_PickUpItemToInventory_Params
{
	int                                                CountToChangeAddOrRemove;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InformPlayerWithMessage;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasInventoryPickupFine_;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InventoryWasFull_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NotAbleToRemove_CountToLess_;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NewItemCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetActivePlayerCamera
struct UBPI_PlayerChakaterPawnInterfaces_C_GetActivePlayerCamera_Params
{
	class UCameraComponent*                            ActiveCamera;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Active Crosshair
struct UBPI_PlayerChakaterPawnInterfaces_C_Active_Crosshair_Params
{
};

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Deactivate Crosshair
struct UBPI_PlayerChakaterPawnInterfaces_C_Deactivate_Crosshair_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
