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

// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerSpectatorCamBackToDefaultCam
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerChakaterPawnInterfaces_C::SetPlayerSpectatorCamBackToDefaultCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerSpectatorCamBackToDefaultCam");

	UBPI_PlayerChakaterPawnInterfaces_C_SetPlayerSpectatorCamBackToDefaultCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerCamToSpectatorOnlyForNonLocalPlControlled
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerChakaterPawnInterfaces_C::SetPlayerCamToSpectatorOnlyForNonLocalPlControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerCamToSpectatorOnlyForNonLocalPlControlled");

	UBPI_PlayerChakaterPawnInterfaces_C_SetPlayerCamToSpectatorOnlyForNonLocalPlControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.TriggerReadAndSetNewMouseSettingsSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerChakaterPawnInterfaces_C::TriggerReadAndSetNewMouseSettingsSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.TriggerReadAndSetNewMouseSettingsSensitivity");

	UBPI_PlayerChakaterPawnInterfaces_C_TriggerReadAndSetNewMouseSettingsSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerBackFromDeadToUnconBleedOut_OnSrv
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerChakaterPawnInterfaces_C::SetPlayerBackFromDeadToUnconBleedOut_OnSrv()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetPlayerBackFromDeadToUnconBleedOut_OnSrv");

	UBPI_PlayerChakaterPawnInterfaces_C_SetPlayerBackFromDeadToUnconBleedOut_OnSrv_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetPlayerCameraManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*    PlayerCamManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerChakaterPawnInterfaces_C::GetPlayerCameraManager(class APlayerCameraManager** PlayerCamManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetPlayerCameraManager");

	UBPI_PlayerChakaterPawnInterfaces_C_GetPlayerCameraManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerCamManager != nullptr)
		*PlayerCamManager = params.PlayerCamManager;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetInventoryItemCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Set_to_specfic_count           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Set_to_Max_Stack_Size          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Only_Add_when_Item_already_in_inventory_at_least_with_0 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           PlayPickupSound_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Should_Player_be_informed      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Done_fine_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerChakaterPawnInterfaces_C::SetInventoryItemCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, int Set_to_specfic_count, bool Set_to_Max_Stack_Size, bool Only_Add_when_Item_already_in_inventory_at_least_with_0, bool PlayPickupSound_, bool Should_Player_be_informed, bool* Done_fine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.SetInventoryItemCount");

	UBPI_PlayerChakaterPawnInterfaces_C_SetInventoryItemCount_Params params;
	params.ItemId = ItemId;
	params.Set_to_specfic_count = Set_to_specfic_count;
	params.Set_to_Max_Stack_Size = Set_to_Max_Stack_Size;
	params.Only_Add_when_Item_already_in_inventory_at_least_with_0 = Only_Add_when_Item_already_in_inventory_at_least_with_0;
	params.PlayPickupSound_ = PlayPickupSound_;
	params.Should_Player_be_informed = Should_Player_be_informed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Done_fine_ != nullptr)
		*Done_fine_ = params.Done_fine_;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Get Vector and Rot in View Line
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance_in_front              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Done_fine_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              TransformLocVecRot             (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBPI_PlayerChakaterPawnInterfaces_C::Get_Vector_and_Rot_in_View_Line(float Distance_in_front, bool* Done_fine_, struct FTransform* TransformLocVecRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Get Vector and Rot in View Line");

	UBPI_PlayerChakaterPawnInterfaces_C_Get_Vector_and_Rot_in_View_Line_Params params;
	params.Distance_in_front = Distance_in_front;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Done_fine_ != nullptr)
		*Done_fine_ = params.Done_fine_;
	if (TransformLocVecRot != nullptr)
		*TransformLocVecRot = params.TransformLocVecRot;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetFullInventoryWithAllItemDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Get_also_Items_with_count_zero_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>> GetItemCategories              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Count_of_different_Items_in_Result_Array (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_Items_Without_Errors_    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemDataStructF> Inventory_Full                 (Parm, OutParm)
void UBPI_PlayerChakaterPawnInterfaces_C::GetFullInventoryWithAllItemDetails(bool Get_also_Items_with_count_zero_, TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>>* GetItemCategories, int* Count_of_different_Items_in_Result_Array, bool* Found_Items_Without_Errors_, TArray<struct FItemDataStructF>* Inventory_Full)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetFullInventoryWithAllItemDetails");

	UBPI_PlayerChakaterPawnInterfaces_C_GetFullInventoryWithAllItemDetails_Params params;
	params.Get_also_Items_with_count_zero_ = Get_also_Items_with_count_zero_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetItemCategories != nullptr)
		*GetItemCategories = params.GetItemCategories;
	if (Count_of_different_Items_in_Result_Array != nullptr)
		*Count_of_different_Items_in_Result_Array = params.Count_of_different_Items_in_Result_Array;
	if (Found_Items_Without_Errors_ != nullptr)
		*Found_Items_Without_Errors_ = params.Found_Items_Without_Errors_;
	if (Inventory_Full != nullptr)
		*Inventory_Full = params.Inventory_Full;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.CheckGetItemFirstTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> SearchItemID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Is_New_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerChakaterPawnInterfaces_C::CheckGetItemFirstTime(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> SearchItemID, bool* Is_New_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.CheckGetItemFirstTime");

	UBPI_PlayerChakaterPawnInterfaces_C_CheckGetItemFirstTime_Params params;
	params.SearchItemID = SearchItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_New_ != nullptr)
		*Is_New_ = params.Is_New_;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetInventoryItemAndCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Get_also_Items_with_count_zero_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventorySlotStructB> InventoryNOTAsReference        (Parm, OutParm)
// int                            Count_of_different_Items_in_Result_Array (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_Item_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            FoundOnIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventorySlotStructB   FoundInventoryItemSlotStruct   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataStructF        FoundInventoryItemFullDetails  (Parm, OutParm, HasGetValueTypeHash)
void UBPI_PlayerChakaterPawnInterfaces_C::GetInventoryItemAndCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool Get_also_Items_with_count_zero_, TArray<struct FInventorySlotStructB>* InventoryNOTAsReference, int* Count_of_different_Items_in_Result_Array, bool* Found_Item_, int* FoundOnIndex, struct FInventorySlotStructB* FoundInventoryItemSlotStruct, struct FItemDataStructF* FoundInventoryItemFullDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetInventoryItemAndCount");

	UBPI_PlayerChakaterPawnInterfaces_C_GetInventoryItemAndCount_Params params;
	params.ItemId = ItemId;
	params.Get_also_Items_with_count_zero_ = Get_also_Items_with_count_zero_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryNOTAsReference != nullptr)
		*InventoryNOTAsReference = params.InventoryNOTAsReference;
	if (Count_of_different_Items_in_Result_Array != nullptr)
		*Count_of_different_Items_in_Result_Array = params.Count_of_different_Items_in_Result_Array;
	if (Found_Item_ != nullptr)
		*Found_Item_ = params.Found_Item_;
	if (FoundOnIndex != nullptr)
		*FoundOnIndex = params.FoundOnIndex;
	if (FoundInventoryItemSlotStruct != nullptr)
		*FoundInventoryItemSlotStruct = params.FoundInventoryItemSlotStruct;
	if (FoundInventoryItemFullDetails != nullptr)
		*FoundInventoryItemFullDetails = params.FoundInventoryItemFullDetails;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.PickUpItemToInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CountToChangeAddOrRemove       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InformPlayerWithMessage        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasInventoryPickupFine_        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InventoryWasFull_              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NotAbleToRemove_CountToLess_   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NewItemCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerChakaterPawnInterfaces_C::PickUpItemToInventory(int CountToChangeAddOrRemove, TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool InformPlayerWithMessage, bool* WasInventoryPickupFine_, bool* InventoryWasFull_, bool* NotAbleToRemove_CountToLess_, int* NewItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.PickUpItemToInventory");

	UBPI_PlayerChakaterPawnInterfaces_C_PickUpItemToInventory_Params params;
	params.CountToChangeAddOrRemove = CountToChangeAddOrRemove;
	params.ItemId = ItemId;
	params.InformPlayerWithMessage = InformPlayerWithMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasInventoryPickupFine_ != nullptr)
		*WasInventoryPickupFine_ = params.WasInventoryPickupFine_;
	if (InventoryWasFull_ != nullptr)
		*InventoryWasFull_ = params.InventoryWasFull_;
	if (NotAbleToRemove_CountToLess_ != nullptr)
		*NotAbleToRemove_CountToLess_ = params.NotAbleToRemove_CountToLess_;
	if (NewItemCount != nullptr)
		*NewItemCount = params.NewItemCount;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetActivePlayerCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ActiveCamera                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerChakaterPawnInterfaces_C::GetActivePlayerCamera(class UCameraComponent** ActiveCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.GetActivePlayerCamera");

	UBPI_PlayerChakaterPawnInterfaces_C_GetActivePlayerCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveCamera != nullptr)
		*ActiveCamera = params.ActiveCamera;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Active Crosshair
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerChakaterPawnInterfaces_C::Active_Crosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Active Crosshair");

	UBPI_PlayerChakaterPawnInterfaces_C_Active_Crosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Deactivate Crosshair
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerChakaterPawnInterfaces_C::Deactivate_Crosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerChakaterPawnInterfaces.BPI_PlayerChakaterPawnInterfaces_C.Deactivate Crosshair");

	UBPI_PlayerChakaterPawnInterfaces_C_Deactivate_Crosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
