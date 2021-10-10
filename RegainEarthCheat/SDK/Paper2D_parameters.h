﻿#pragma once

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

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
struct UPaperFlipbook_IsValidKeyFrameIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetTotalDuration
struct UPaperFlipbook_GetTotalDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtTime
struct UPaperFlipbook_GetSpriteAtTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClampToEnds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
struct UPaperFlipbook_GetSpriteAtFrame_Params
{
	int                                                FrameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetNumKeyFrames
struct UPaperFlipbook_GetNumKeyFrames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetNumFrames
struct UPaperFlipbook_GetNumFrames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
struct UPaperFlipbook_GetKeyFrameIndexAtTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClampToEnds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.Stop
struct UPaperFlipbookComponent_Stop_Params
{
};

// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
struct UPaperFlipbookComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetPlayRate
struct UPaperFlipbookComponent_SetPlayRate_Params
{
	float                                              NewRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
struct UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params
{
	int                                                NewFramePosition;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireEvents;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
struct UPaperFlipbookComponent_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireEvents;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetNewTime
struct UPaperFlipbookComponent_SetNewTime_Params
{
	float                                              NewTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetLooping
struct UPaperFlipbookComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetFlipbook
struct UPaperFlipbookComponent_SetFlipbook_Params
{
	class UPaperFlipbook*                              NewFlipbook;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
struct UPaperFlipbookComponent_ReverseFromEnd_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Reverse
struct UPaperFlipbookComponent_Reverse_Params
{
};

// Function Paper2D.PaperFlipbookComponent.PlayFromStart
struct UPaperFlipbookComponent_PlayFromStart_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Play
struct UPaperFlipbookComponent_Play_Params
{
};

// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
struct UPaperFlipbookComponent_OnRep_SourceFlipbook_Params
{
	class UPaperFlipbook*                              OldFlipbook;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.IsReversing
struct UPaperFlipbookComponent_IsReversing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.IsPlaying
struct UPaperFlipbookComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.IsLooping
struct UPaperFlipbookComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetSpriteColor
struct UPaperFlipbookComponent_GetSpriteColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetPlayRate
struct UPaperFlipbookComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
struct UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
struct UPaperFlipbookComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
struct UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
struct UPaperFlipbookComponent_GetFlipbookLength_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
struct UPaperFlipbookComponent_GetFlipbookFramerate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbook
struct UPaperFlipbookComponent_GetFlipbook_Params
{
	class UPaperFlipbook*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
struct UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params
{
	int                                                InstanceIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  NewInstanceTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMarkRenderStateDirty;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeleport;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
struct UPaperGroupedSpriteComponent_UpdateInstanceColor_Params
{
	int                                                InstanceIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NewInstanceColor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMarkRenderStateDirty;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
struct UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params
{
	struct FVector                                     WorldSpaceSortAxis;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
struct UPaperGroupedSpriteComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
struct UPaperGroupedSpriteComponent_GetInstanceTransform_Params
{
	int                                                InstanceIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  OutInstanceTransform;                                      // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
struct UPaperGroupedSpriteComponent_GetInstanceCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
struct UPaperGroupedSpriteComponent_ClearInstances_Params
{
};

// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
struct UPaperGroupedSpriteComponent_AddInstance_Params
{
	struct FTransform                                  Transform;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                                Sprite;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
struct UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params
{
	class UPaperSprite*                                Sprite;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteComponent.SetSpriteColor
struct UPaperSpriteComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteComponent.SetSprite
struct UPaperSpriteComponent_SetSprite_Params
{
	class UPaperSprite*                                NewSprite;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteComponent.GetSprite
struct UPaperSpriteComponent_GetSprite_Params
{
	class UPaperSprite*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTerrainComponent.SetTerrainColor
struct UPaperTerrainComponent_SetTerrainColor_Params
{
	struct FLinearColor                                NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetTileMapColor
struct UPaperTileMapComponent_SetTileMapColor_Params
{
	struct FLinearColor                                NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetTileMap
struct UPaperTileMapComponent_SetTileMap_Params
{
	class UPaperTileMap*                               NewTileMap;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetTile
struct UPaperTileMapComponent_SetTile_Params
{
	int                                                X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaperTileInfo                              NewValue;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetLayerColor
struct UPaperTileMapComponent_SetLayerColor_Params
{
	struct FLinearColor                                NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetLayerCollision
struct UPaperTileMapComponent_SetLayerCollision_Params
{
	int                                                Layer;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasCollision;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideThickness;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomThickness;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
struct UPaperTileMapComponent_SetDefaultCollisionThickness_Params
{
	float                                              Thickness;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.ResizeMap
struct UPaperTileMapComponent_ResizeMap_Params
{
	int                                                NewWidthInTiles;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewHeightInTiles;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.RebuildCollision
struct UPaperTileMapComponent_RebuildCollision_Params
{
};

// Function Paper2D.PaperTileMapComponent.OwnsTileMap
struct UPaperTileMapComponent_OwnsTileMap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
struct UPaperTileMapComponent_MakeTileMapEditable_Params
{
};

// Function Paper2D.PaperTileMapComponent.GetTilePolygon
struct UPaperTileMapComponent_GetTilePolygon_Params
{
	int                                                TileX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Points;                                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                LayerIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTileMapColor
struct UPaperTileMapComponent_GetTileMapColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
struct UPaperTileMapComponent_GetTileCornerPosition_Params
{
	int                                                TileX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
struct UPaperTileMapComponent_GetTileCenterPosition_Params
{
	int                                                TileX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTile
struct UPaperTileMapComponent_GetTile_Params
{
	int                                                X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaperTileInfo                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetMapSize
struct UPaperTileMapComponent_GetMapSize_Params
{
	int                                                MapWidth;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapHeight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumLayers;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetLayerColor
struct UPaperTileMapComponent_GetLayerColor_Params
{
	int                                                Layer;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
struct UPaperTileMapComponent_CreateNewTileMap_Params
{
	int                                                MapWidth;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapHeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelsPerUnrealUnit;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateLayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.AddNewLayer
struct UPaperTileMapComponent_AddNewLayer_Params
{
	class UPaperTileLayer*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.MakeTile
struct UTileMapBlueprintLibrary_MakeTile_Params
{
	int                                                TileIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperTileSet*                               TileSet;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipH;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipV;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipD;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaperTileInfo                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
struct UTileMapBlueprintLibrary_GetTileUserData_Params
{
	struct FPaperTileInfo                              Tile;                                                      // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
struct UTileMapBlueprintLibrary_GetTileTransform_Params
{
	struct FPaperTileInfo                              Tile;                                                      // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.BreakTile
struct UTileMapBlueprintLibrary_BreakTile_Params
{
	struct FPaperTileInfo                              Tile;                                                      // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TileIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperTileSet*                               TileSet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipH;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipD;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
