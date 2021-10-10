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

// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_EE9X[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedToolBuilder");
		return ptr;
	}



};

// Class ModelingComponents.OnAcceptHandleSourcesProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{
public:
	ModelingComponents_EHandleSourcesMethod            OnToolAccept;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AX6B[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.OnAcceptHandleSourcesProperties");
		return ptr;
	}



};

// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
public:
	ModelingComponents_EBaseCreateFromSelectedTargetType WriteOutputTo;                                             // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8W2[0x3];                                     // 0x0068(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_BEYK[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OutputName;                                                // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutputAsset;                                               // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties");
		return ptr;
	}



};

// Class ModelingComponents.TransformInputsToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowTransformUI;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9NZ4[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.TransformInputsToolProperties");
		return ptr;
	}



};

// Class ModelingComponents.BaseCreateFromSelectedTool
// 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
class UBaseCreateFromSelectedTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_46HX[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformInputsToolProperties*              TransformProperties;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                                   // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>                     TransformProxies;                                          // 0x00B0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UTransformGizmo*>                     TransformGizmos;                                           // 0x00C0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                             TransformInitialScales;                                    // 0x00D0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_60IG[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedTool");
		return ptr;
	}



};

// Class ModelingComponents.BaseDynamicMeshComponent
// 0x0048 (FullSize[0x04B0] - InheritedSize[0x0468])
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_IG1S[0x8];                                     // 0x0468(0x0008) Fix Super Size
	unsigned char                                      UnknownData_ULPP[0x40];                                    // 0x0470(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.BaseDynamicMeshComponent");
		return ptr;
	}



};

// Class ModelingComponents.BaseMeshProcessingToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.BaseMeshProcessingToolBuilder");
		return ptr;
	}



};

// Class ModelingComponents.BaseMeshProcessingTool
// 0x0378 (FullSize[0x0400] - InheritedSize[0x0088])
class UBaseMeshProcessingTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_7GNP[0x28];                                    // 0x0088(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N30D[0x348];                                   // 0x00B8(0x0348) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.BaseMeshProcessingTool");
		return ptr;
	}



};

// Class ModelingComponents.BaseVoxelTool
// 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
public:
	class UVoxelProperties*                            VoxProperties;                                             // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6WUH[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.BaseVoxelTool");
		return ptr;
	}



};

// Class ModelingComponents.CollectSurfacePathMechanic
// 0x0520 (FullSize[0x0550] - InheritedSize[0x0030])
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_HKMA[0x520];                                   // 0x0030(0x0520) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.CollectSurfacePathMechanic");
		return ptr;
	}



};

// Class ModelingComponents.ConstructionPlaneMechanic
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_ZJ7F[0x98];                                    // 0x0030(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8PMO[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                   // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.ConstructionPlaneMechanic");
		return ptr;
	}



};

// Class ModelingComponents.CurveControlPointsMechanic
// 0x0620 (FullSize[0x0650] - InheritedSize[0x0030])
class UCurveControlPointsMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_S0WM[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USingleClickInputBehavior*                   ClickBehavior;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                         HoverBehavior;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LG8S[0x498];                                   // 0x0050(0x0498) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APreviewGeometryActor*                       PreviewGeometryActor;                                      // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                          DrawnControlPoints;                                        // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                           DrawnControlSegments;                                      // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                          PreviewPoint;                                              // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                           PreviewSegment;                                            // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D1PM[0x78];                                    // 0x0510(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformProxy*                             PointTransformProxy;                                       // 0x0588(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PointTransformGizmo;                                       // 0x0590(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0PD5[0xB8];                                    // 0x0598(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.CurveControlPointsMechanic");
		return ptr;
	}



};

// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	unsigned char                                      UnknownData_N5QY[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.DynamicMeshReplacementChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.LineSetComponent
// 0x0068 (FullSize[0x04D0] - InheritedSize[0x0468])
class ULineSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                          LineMaterial;                                              // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                            Bounds;                                                    // 0x0470(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bBoundsDirty;                                              // 0x048C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J53W[0x43];                                    // 0x048D(0x0043) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.LineSetComponent");
		return ptr;
	}



};

// Class ModelingComponents.MeshCommandChangeTarget
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshCommandChangeTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.MeshCommandChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	unsigned char                                      UnknownData_IUE1[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  StandardMaterials;                                         // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          WorkingMaterial;                                           // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSRM[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.MeshOpPreviewWithBackgroundCompute");
		return ptr;
	}



};

// Class ModelingComponents.MeshReplacementCommandChangeTarget
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshReplacementCommandChangeTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.MeshReplacementCommandChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.MeshVertexCommandChangeTarget
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshVertexCommandChangeTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.MeshVertexCommandChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.MultiTransformer
// 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
class UMultiTransformer : public UObject
{
public:
	unsigned char                                      UnknownData_UD4S[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractiveGizmoManager*                    GizmoManager;                                              // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4T7K[0x68];                                    // 0x0078(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                             TransformProxy;                                            // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DSI8[0x50];                                    // 0x00F0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.MultiTransformer");
		return ptr;
	}



};

// Class ModelingComponents.OctreeDynamicMeshComponent
// 0x0110 (FullSize[0x05C0] - InheritedSize[0x04B0])
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	unsigned char                                      UnknownData_4H4A[0x18];                                    // 0x04B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExplicitShowWireframe;                                    // 0x04C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L2LZ[0xF7];                                    // 0x04C9(0x00F7) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.OctreeDynamicMeshComponent");
		return ptr;
	}



};

// Class ModelingComponents.PlaneDistanceFromHitMechanic
// 0x0480 (FullSize[0x04B0] - InheritedSize[0x0030])
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_ENMJ[0x480];                                   // 0x0030(0x0480) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PlaneDistanceFromHitMechanic");
		return ptr;
	}



};

// Class ModelingComponents.PointSetComponent
// 0x0068 (FullSize[0x04D0] - InheritedSize[0x0468])
class UPointSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                          PointMaterial;                                             // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                            Bounds;                                                    // 0x0470(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bBoundsDirty;                                              // 0x048C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XCPJ[0x43];                                    // 0x048D(0x0043) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PointSetComponent");
		return ptr;
	}



};

// Class ModelingComponents.PreviewMesh
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UPreviewMesh : public UObject
{
public:
	unsigned char                                      UnknownData_JTJY[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bBuildSpatialDataStructure;                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawOnTop;                                                // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OWS7[0xE];                                     // 0x0042(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UF8M[0x88];                                    // 0x0058(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PreviewMesh");
		return ptr;
	}



};

// Class ModelingComponents.PolyEditPreviewMesh
// 0x03F0 (FullSize[0x04D0] - InheritedSize[0x00E0])
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	unsigned char                                      UnknownData_J4GB[0x3F0];                                   // 0x00E0(0x03F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PolyEditPreviewMesh");
		return ptr;
	}



};

// Class ModelingComponents.PolygonSelectionMechanicProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSelectFaces;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectEdges;                                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectVertices;                                           // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreferProjectedElement;                                   // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectDownRay;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreOcclusion;                                          // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IHFZ[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanicProperties");
		return ptr;
	}



};

// Class ModelingComponents.PolygonSelectionMechanic
// 0x0640 (FullSize[0x0670] - InheritedSize[0x0030])
class UPolygonSelectionMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_G8BE[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolygonSelectionMechanicProperties*         Properties;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4IXQ[0x308];                                   // 0x0058(0x0308) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APreviewGeometryActor*                       PreviewGeometryActor;                                      // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTriangleSetComponent*                       DrawnTriangleSetComponent;                                 // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1402[0x50];                                    // 0x0370(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          HighlightedFaceMaterial;                                   // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4OZ1[0x2A8];                                   // 0x03C8(0x02A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanic");
		return ptr;
	}



};

// Class ModelingComponents.PreviewGeometryActor
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class APreviewGeometryActor : public AInternalToolFrameworkActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PreviewGeometryActor");
		return ptr;
	}



};

// Class ModelingComponents.PreviewGeometry
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UPreviewGeometry : public UObject
{
public:
	class APreviewGeometryActor*                       ParentActor;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, class ULineSetComponent*>     LineSets;                                                  // 0x0030(0x0050) (ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PreviewGeometry");
		return ptr;
	}



	bool SetLineSetVisibility(const struct FString& LineSetIdentifier, bool bVisible);
	bool SetLineSetMaterial(const struct FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
	void SetAllLineSetsMaterial(class UMaterialInterface* Material);
	bool RemoveLineSet(const struct FString& LineSetIdentifier, bool bDestroy);
	void RemoveAllLineSets(bool bDestroy);
	class APreviewGeometryActor* GetActor();
	class ULineSetComponent* FindLineSet(const struct FString& LineSetIdentifier);
	void Disconnect();
	void CreateInWorld(class UWorld* World, const struct FTransform& WithTransform);
	class ULineSetComponent* AddLineSet(const struct FString& LineSetIdentifier);
};

// Class ModelingComponents.PreviewMeshActor
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class APreviewMeshActor : public AInternalToolFrameworkActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.PreviewMeshActor");
		return ptr;
	}



};

// Class ModelingComponents.SimpleDynamicMeshComponent
// 0x0150 (FullSize[0x0600] - InheritedSize[0x04B0])
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	ModelingComponents_EDynamicMeshTangentCalcType     TangentsType;                                              // 0x04B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvalidateProxyOnChange;                                  // 0x04B1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHD8[0x36];                                    // 0x04B2(0x0036) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExplicitShowWireframe;                                    // 0x04E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PEML[0x47];                                    // 0x04E9(0x0047) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bDrawOnTop;                                                // 0x0530(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_COLD[0xCF];                                    // 0x0531(0x00CF) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.SimpleDynamicMeshComponent");
		return ptr;
	}



};

// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
public:
	ModelingComponents_ESpaceCurveControlPointTransformMode TransformMode;                                             // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TIUJ[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ModelingComponents_ESpaceCurveControlPointOriginMode TransformOrigin;                                           // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4LKC[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Softness;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingComponents_ESpaceCurveControlPointFalloffType SoftFalloff;                                               // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLK4[0x3];                                     // 0x006C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet");
		return ptr;
	}



};

// Class ModelingComponents.SpaceCurveDeformationMechanic
// 0x0280 (FullSize[0x02B0] - InheritedSize[0x0030])
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_ENX1[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USingleClickInputBehavior*                   ClickBehavior;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                         HoverBehavior;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TRHC[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpaceCurveDeformationMechanicPropertySet*   TransformProperties;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CCDF[0xF8];                                    // 0x0070(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APreviewGeometryActor*                       PreviewGeometryActor;                                      // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                          RenderPoints;                                              // 0x0170(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                           RenderSegments;                                            // 0x0178(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0WWN[0x38];                                    // 0x0180(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformProxy*                             PointTransformProxy;                                       // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PointTransformGizmo;                                       // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BNC2[0xE8];                                    // 0x01C8(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.SpaceCurveDeformationMechanic");
		return ptr;
	}



};

// Class ModelingComponents.SpatialCurveDistanceMechanic
// 0x03C0 (FullSize[0x03F0] - InheritedSize[0x0030])
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_61C0[0x3C0];                                   // 0x0030(0x03C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.SpatialCurveDistanceMechanic");
		return ptr;
	}



};

// Class ModelingComponents.TriangleSetComponent
// 0x00E8 (FullSize[0x0550] - InheritedSize[0x0468])
class UTriangleSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                            Bounds;                                                    // 0x0468(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bBoundsDirty;                                              // 0x0484(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VNL7[0xCB];                                    // 0x0485(0x00CB) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.TriangleSetComponent");
		return ptr;
	}



};

// Class ModelingComponents.UVLayoutPreviewProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bVisible;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0FJA[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScaleFactor;                                               // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingComponents_EUVLayoutPreviewSide            WhichSide;                                                 // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T68M[0x3];                                     // 0x0068(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bShowWireframe;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJN8[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Shift;                                                     // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.UVLayoutPreviewProperties");
		return ptr;
	}



};

// Class ModelingComponents.UVLayoutPreview
// 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
class UUVLayoutPreview : public UObject
{
public:
	class UUVLayoutPreviewProperties*                  Settings;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTriangleSetComponent*                       TriangleComponent;                                         // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowBackingRectangle;                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6XJ[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          BackingRectangleMaterial;                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_92N8[0xF0];                                    // 0x0050(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.UVLayoutPreview");
		return ptr;
	}



};

// Class ModelingComponents.VoxelProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UVoxelProperties : public UInteractiveToolPropertySet
{
public:
	int                                                VoxelCount;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoSimplify;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveInternalSurfaces;                                   // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BY8G[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             SimplifyMaxErrorFactor;                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             CubeRootMinComponentVolume;                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.VoxelProperties");
		return ptr;
	}



};

// Class ModelingComponents.WeightMapSetProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
public:
	struct FName                                       WeightMap;                                                 // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             WeightMapsList;                                            // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bInvertWeightMap;                                          // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PP3[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModelingComponents.WeightMapSetProperties");
		return ptr;
	}



	TArray<struct FString> GetWeightMapsFunc();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
