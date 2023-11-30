#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
struct UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ToStaticMeshAsset;                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptions Options;                                           // 0x10(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
struct UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params
{
public:
	class UStaticMesh*                           StaticMeshAsset;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   SourceComponent;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSetSimpleCollisionOptions Options;                                           // 0x10(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C99[0x7];                                      // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
struct UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMeshComponent*                 ToDynamicMeshComponent;                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptions Options;                                           // 0x10(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
struct UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params
{
public:
	class UDynamicMeshComponent*                 Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitTransaction;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB7[0x7];                                      // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD5[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 ProjectionFrame;                                   // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSweptHullOptions Options;                                           // 0x80(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDC[0x8];                                      // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x18(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptConvexHullOptions Options;                                           // 0x28(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF7[0x4];                                      // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptConvexDecompositionOptions Options;                                           // 0x18(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D32[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    NewValue;                                          // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D33[0x7];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D42[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  NewUV;                                             // 0x18(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D45[0x7];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D55[0x4];                                      // Fixing Size After Last Property  
	double                                       NewValue;                                          // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D56[0x7];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6C[0x7];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               NewColor;                                          // 0x14(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x24(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7D[0x3];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D92[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9B[0x4];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAE[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBA[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC6[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDA[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptTriangleList TriangleList;                                      // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE7[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptTriangleList TriangleList;                                      // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E02[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptTriangleList TriangleList;                                      // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        Triangle;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E12[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_IntVector                 ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E13[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2A[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3A[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4D[0x3];                                      // Fixing Size After Last Property  
	double                                       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5C[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E78[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E88[0x3];                                      // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8A[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9B[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA7[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC9[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
struct UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        XChannelIndex;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        YChannelIndex;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZChannelIndex;                                     // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF3[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
struct UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F08[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList DuplicateList;                                     // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptUVList DuplicateList;                                     // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList DuplicateList;                                     // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList DuplicateList;                                     // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorList DuplicateList;                                     // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            VectorArray;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          UVArray;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptTriangleList TriangleList;                                      // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_IntVector>         TriangleArray;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<double>                               ScalarArray;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<int32>                                IndexArray;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_LinearColor>       ColorArray;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params
{
public:
	TArray<struct CoreUObject_Vector>            VectorArray;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params
{
public:
	TArray<struct CoreUObject_Vector2D>          UVArray;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params
{
public:
	TArray<struct CoreUObject_IntVector>         TriangleArray;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTriangleList TriangleList;                                      // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params
{
public:
	TArray<double>                               VectorArray;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params
{
public:
	TArray<int32>                                IndexArray;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptIndexType          IndexType;                                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103B[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params
{
public:
	TArray<struct CoreUObject_LinearColor>       ColorArray;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ClearValue;                                        // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  ClearUV;                                           // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	double                                       ClearValue;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ClearValue;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E2[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ClearColor;                                        // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params
{
public:
	class UStaticMesh*                           FromStaticMeshAsset;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshReadLOD RequestedLOD;                                      // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            MaterialList;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                MaterialIndex;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A6[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ToStaticMeshAsset;                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptions Options;                                           // 0x10(0x80)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshWriteLOD TargetLod;                                         // 0x90(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x98(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CC[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         ToSkeletalMeshAsset;                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptions Options;                                           // 0x10(0x80)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshWriteLOD TargetLod;                                         // 0x90(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x98(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120E[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params
{
public:
	class UStaticMesh*                           FromStaticMeshAsset;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptions AssetOptions;                                      // 0x10(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1235[0x1];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshReadLOD RequestedLOD;                                      // 0x14(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1239[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params
{
public:
	class USkeletalMesh*                         FromSkeletalMeshAsset;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptions AssetOptions;                                      // 0x10(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_125F[0x1];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshReadLOD RequestedLOD;                                      // 0x14(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1265[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params
{
public:
	class UTexture2D*                            SourceTexture;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceUVLayer;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A0[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params
{
public:
	TArray<class UTexture2D*>                    MaterialIDSourceTextures;                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        SourceUVLayer;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CD[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params
{
public:
	enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptBakeCurvatureColorMode ColorMapping;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EF[0x2];                                     // Fixing Size After Last Property  
	float                                        ColorRangeMultiplier;                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRangeMultiplier;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptBakeCurvatureClampMode Clamping;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F4[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params
{
public:
	int32                                        OcclusionRays;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadAngle;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1305[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params
{
public:
	int32                                        OcclusionRays;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadAngle;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BiasAngle;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1330[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TargetTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions TargetOptions;                                     // 0x70(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1332[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          SourceMesh;                                        // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 SourceTransform;                                   // 0x80(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptions SourceOptions;                                     // 0xE0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeOutputType BakeTypes;                                         // 0xF0(0x80)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeVertexOptions BakeOptions;                                       // 0x170(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1335[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x180(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x188(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1367[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TargetLocalToWorld;                                // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions TargetOptions;                                     // 0x70(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_136D[0x4];                                     // Fixing Size After Last Property  
	TArray<class AActor*>                        SourceActors;                                      // 0x78(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeRenderCaptureOptions BakeOptions;                                       // 0x88(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0xB0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRenderCaptureTextures ReturnValue;                                       // 0xB8(0x90)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1370[0x8];                                     // Fixing Size Of Struct 
};

// 0x140 (0x140 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TargetTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions TargetOptions;                                     // 0x70(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1391[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          SourceMesh;                                        // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 SourceTransform;                                   // 0x80(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptions SourceOptions;                                     // 0xE0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct GeometryScriptingCore_GeometryScriptBakeTypeOptions> BakeTypes;                                         // 0xF0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBakeTextureOptions BakeOptions;                                       // 0x100(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x120(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    ReturnValue;                                       // 0x128(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_139B[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
struct UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DB[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    NewPosition;                                       // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidVertex;                                    // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DD[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
struct UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList PositionList;                                      // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F6[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList VertexList;                                        // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        NumDeleted;                                        // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140B[0x3];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasVertexDeleted;                                 // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141B[0x2];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleList;                                      // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        NumDeleted;                                        // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1437[0x3];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasTriangleDeleted;                               // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1440[0x2];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        NumDeleted;                                        // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1463[0x3];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         AppendTransforms;                                  // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 ConstantTransform;                                 // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConstantTransformIsRelative;                      // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptAppendMeshOptions AppendOptions;                                     // 0x82(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A1[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A3[0x8];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 AppendTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RepeatCount;                                       // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyTransformToFirstInstance;                    // 0x74(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x75(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptAppendMeshOptions AppendOptions;                                     // 0x76(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BA[0x1];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BC[0x8];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 AppendTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptAppendMeshOptions AppendOptions;                                     // 0x71(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DD[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E0[0x8];                                     // Fixing Size Of Struct 
};

// 0x108 (0x108 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimpleMeshBuffers Buffers;                                           // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList NewTriangleIndicesList;                            // 0xD8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0xF0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0xF4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FF[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xF8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x100(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList NewPositionsList;                                  // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList NewIndicesList;                                    // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151B[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    NewPosition;                                       // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewVertexIndex;                                    // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152F[0x3];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_IntVector                 NewTriangle;                                       // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewTriangleIndex;                                  // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewTriangleGroupID;                                // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1549[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTriangleList NewTrianglesList;                                  // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList NewIndicesList;                                    // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        NewTriangleGroupID;                                // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155E[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.TransferBoneWeightsFromMesh
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Params
{
public:
	class UDynamicMesh*                          SourceMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          TargetMesh;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTransferBoneWeightsOptions Options;                                           // 0x10(0x40)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D0[0x4];                                     // Fixing Size After Last Property  
	TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight> BoneWeights;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsValidVertexID;                                  // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D2[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0x24(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D6[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight> BoneWeights;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0x18(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBoneWeights;                                   // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160F[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0xC(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_161B[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProfileExisted;                                   // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceExistingProfile;                           // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163B[0x2];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0xC(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_163F[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1664[0x4];                                     // Fixing Size After Last Property  
	TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight> BoneWeights;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHasValidBoneWeights;                              // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1669[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0x24(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_166A[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetRootBoneName
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBoneWeights;                                   // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A2[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxBoneIndex;                                      // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0x10(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBoneWeight BoneWeight;                                        // 0xC(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasValidBoneWeights;                              // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DE[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0x18(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneInfo
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidBoneName;                                  // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170A[0xF];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptBoneInfo BoneInfo;                                          // 0x20(0xE0)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x100(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x108(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneIndex
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidBoneName;                                  // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172D[0x3];                                     // Fixing Size After Last Property  
	int32                                        BoneIndex;                                         // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneChildren
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidBoneName;                                  // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174D[0x6];                                     // Fixing Size After Last Property  
	TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo> ChildrenInfo;                                      // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetAllBonesInfo
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo> BonesInfo;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.DiscardBonesFromMesh
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.CopyBonesFromMesh
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Params
{
public:
	class UDynamicMesh*                          SourceMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          TargetMesh;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeleton*                             Skeleton;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSmoothBoneWeightsOptions Options;                                           // 0x10(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBoneWeightProfile Profile;                                           // 0x20(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelfUnionOptions Options;                                           // 0x8(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1810[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182C[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CutFrame;                                          // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshPlaneSliceOptions Options;                                           // 0x70(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1833[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184C[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CutFrame;                                          // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshPlaneCutOptions Options;                                           // 0x70(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1853[0x8];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1865[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 MirrorFrame;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshMirrorOptions Options;                                           // 0x70(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1869[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1870[0x8];                                     // Fixing Size Of Struct 
};

// 0x100 (0x100 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A2[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TargetTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ToolMesh;                                          // 0x70(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A4[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 ToolTransform;                                     // 0x80(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptBooleanOperation   Operation;                                         // 0xE0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A9[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshBooleanOptions Options;                                           // 0xE4(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AD[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xF0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xF8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
struct UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          OtherMesh;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeasureMeshDistanceOptions Options;                                           // 0x10(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FE[0x7];                                     // Fixing Size After Last Property  
	double                                       MaxDistance;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinDistance;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AverageDistance;                                   // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RootMeanSqrDeviation;                              // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
struct UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          OtherMesh;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIsSameMeshOptions Options;                                           // 0x10(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsSameMesh;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1926[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
struct UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TargetTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          OtherMesh;                                         // 0x70(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1952[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 OtherTransform;                                    // 0x80(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsIntersecting;                                   // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1958[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xE8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xF0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195A[0x8];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ComponentPolygroups;                               // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ComponentMaterialIDs;                              // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          StoreToSubmesh;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleList;                                      // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          StoreToSubmeshOut;                                 // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params
{
public:
	class UDynamicMesh*                          CopyFromMesh;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          StoreToSubmesh;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          StoreToSubmeshOut;                                 // 0x20(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAppendToExisting;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveGroupIDs;                                 // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7B[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTwistWarpOptions Options;                                           // 0x8(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC8[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TwistOrientation;                                  // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistAngle;                                        // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistExtent;                                       // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACF[0x8];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPerlinNoiseOptions Options;                                           // 0x18(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B01[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WarpOrientation;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMathWarpType       WarpType;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B06[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMathWarpOptions Options;                                           // 0x74(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIterativeMeshSmoothingOptions Options;                                           // 0x18(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2D[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptFlareWarpOptions Options;                                           // 0x8(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4B[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 FlareOrientation;                                  // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlarePercentX;                                     // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlarePercentY;                                     // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlareExtent;                                       // 0x88(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4F[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDisplaceFromTextureOptions Options;                                           // 0x20(0x38)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        UVLayer;                                           // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6E[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x60(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7F[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBendWarpOptions Options;                                           // 0x8(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B97[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 BendOrientation;                                   // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendAngle;                                         // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendExtent;                                        // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9A[0x8];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestVertexPath
struct UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartVertexID;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndVertexID;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList VertexIDList;                                      // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bFoundErrors;                                      // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC2[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestSurfacePath
struct UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartTriangleID;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDB[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    StartBaryCoords;                                   // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndTriangleID;                                     // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDD[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    EndBaryCoords;                                     // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath ShortestPath;                                      // 0x48(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bFoundErrors;                                      // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE0[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x68(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.CreateSurfacePath
struct UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Direction;                                         // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartTriangleID;                                   // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF7[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    StartBaryCoords;                                   // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPathLength;                                     // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF8[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptPolyPath SurfacePath;                                       // 0x48(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bFoundErrors;                                      // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFA[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x68(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C20[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        PolygroupID;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidPolygroupID;                               // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C36[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDList;                                    // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C4B[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C64[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleMaterialIDList;                            // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7D[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FromMaterialID;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ToMaterialID;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C99[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDList;                                    // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAE[0x3];                                     // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAF[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMaterialIDs;                                   // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC4[0x3];                                     // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDList;                                    // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList MaterialIDList;                                    // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList MaterialIDList;                                    // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bHasMaterialIDs;                                   // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFF[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumDeleted;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D42[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            SourceMaterialList;                                // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            CompactedMaterialList;                             // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClearValue;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7F[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshOffsetOptions Options;                                           // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF6[0x8];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshBevelOptions Options;                                           // 0x10(0xC0)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0xD0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshOffsetFacesOptions Options;                                           // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshOffsetOptions Options;                                           // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshLinearExtrudeOptions Options;                                           // 0x8(0x38)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x40(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshInsetOutsetFacesOptions Options;                                           // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x28(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshExtrudeOptions Options;                                           // 0x8(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection NewTriangles;                                      // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x28(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bAllowBowtiesInOutput;                             // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4F[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshBevelSelectionMode BevelMode;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F89[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshBevelSelectionOptions BevelOptions;                                      // 0x1C(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
struct UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateNormal;                                     // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF1[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    NewNormal;                                         // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateTangents;                                   // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF8[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    NewTangentX;                                       // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    NewTangentY;                                       // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidVertex;                                    // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMergeSplitValues;                                 // 0x61(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x62(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2001[0x5];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2075[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptTriangle Normals;                                           // 0x10(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x59(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209C[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList TangentXList;                                      // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList TangentYList;                                      // 0x18(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VertexNormalList;                                  // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormalsForMeshSelection
struct UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormalsForMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions CalculateOptions;                                  // 0x18(0x2)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2128[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions CalculateOptions;                                  // 0x8(0x2)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213E[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList TangentXList;                                      // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList TangentYList;                                      // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bIsValidTangentSet;                                // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVertexIDGaps;                                  // 0x29(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAverageSplitVertexValues;                         // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2181[0x5];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList NormalList;                                        // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bIsValidNormalSet;                                 // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAverageSplitVertexValues;                         // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AB[0x5];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTangents;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C3[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTangentsOptions Options;                                           // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSplitNormalsOptions SplitOptions;                                      // 0x8(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions CalculateOptions;                                  // 0x1C(0x2)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_223F[0x2];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
struct UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        SetPolygroupIDOut;                                 // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SetPolygroupID;                                    // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateNewPolygroup;                             // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B9[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
struct UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLayers;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E2[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        PolygroupID;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22FC[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDsOut;                                    // 0x18(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231F[0x3];                                     // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2321[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList PolygroupIDsOut;                                   // 0x10(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList PolygroupIDsOut;                                   // 0x10(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
struct UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        PolygroupID;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumDeleted;                                        // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E8[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
struct UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer FromGroupLayer;                                    // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer ToGroupLayer;                                      // 0x10(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        UVLayer;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241E[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRespectUVSeams;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRespectHardNormals;                               // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248E[0x6];                                     // Fixing Size After Last Property  
	double                                       QuadAdjacencyWeight;                               // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       QuadMetricClamp;                                   // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSearchRounds;                                   // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248F[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CreaseAngle;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinGroupSize;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ClearValue;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F6[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_256A[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          VoronoiSites;                                      // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVoronoiOptions VoronoiOptions;                                    // 0x80(0x58)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0xD8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xE0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2571[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_259E[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PolygonVertices;                                   // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAllowSelfIntersections;                           // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25A2[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25A8[0x8];                                     // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_25EA[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRevolveOptions RevolveOptions;                                    // 0x70(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MajorRadius;                                       // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinorRadius;                                       // 0x88(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MajorSteps;                                        // 0x8C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinorSteps;                                        // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x94(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25F9[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25FC[0x8];                                     // Fixing Size Of Struct 
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2627[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PolylineVertices;                                  // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         SweepPath;                                         // 0x80(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                PolylineTexParamU;                                 // 0x90(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                SweepPathTexParamV;                                // 0xA0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0xB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264D[0x3];                                     // Fixing Size After Last Property  
	float                                        StartScale;                                        // 0xB4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndScale;                                          // 0xB8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAngleDeg;                                  // 0xBC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0xC0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xC8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B5[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PolygonVertices;                                   // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         SweepPath;                                         // 0x80(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapped;                                           // 0x91(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26BC[0x2];                                     // Fixing Size After Last Property  
	float                                        StartScale;                                        // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndScale;                                          // 0x98(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAngleDeg;                                  // 0x9C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2703[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PolygonVertices;                                   // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRevolveOptions RevolveOptions;                                    // 0x80(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x98(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RisePerRevolution;                                 // 0x9C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2741[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsPhi;                                          // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsTheta;                                        // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x7C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274E[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_277B[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsX;                                            // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsY;                                            // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsZ;                                            // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2780[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2786[0x8];                                     // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B5[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PolygonVertices;                                   // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            SweepPath;                                         // 0x80(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapped;                                           // 0x91(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27BA[0x2];                                     // Fixing Size After Last Property  
	float                                        StartScale;                                        // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndScale;                                          // 0x98(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27BB[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F4[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PolygonVertices;                                   // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSteps;                                       // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapped;                                           // 0x88(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x89(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2806[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_282B[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionX;                                        // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionY;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CornerRadius;                                      // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsWidth;                                        // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsHeight;                                       // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsRound;                                        // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2834[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2858[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionX;                                        // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionY;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CornerRadius;                                      // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsWidth;                                        // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsHeight;                                       // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsRound;                                        // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285F[0x8];                                     // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2893[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PolygonVertices;                                   // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRevolveOptions RevolveOptions;                                    // 0x80(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x98(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A3[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CC[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          PathVertices;                                      // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRevolveOptions RevolveOptions;                                    // 0x80(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapped;                                           // 0x98(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E4[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_291F[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionX;                                        // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionY;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsWidth;                                        // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsHeight;                                       // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2949[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionX;                                        // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionY;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsWidth;                                        // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsHeight;                                       // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendPolygonListTriangulation
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendPolygonListTriangulation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2979[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x70(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolygonsTriangulationOptions TriangulationOptions;                              // 0x80(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bTriangulationError;                               // 0x81(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297D[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2980[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2995[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepWidth;                                         // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepHeight;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepDepth;                                         // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSteps;                                          // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFloating;                                         // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A1[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A4[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CD[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AngleSteps;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpokeSteps;                                        // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartAngle;                                        // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndAngle;                                          // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoleRadius;                                        // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D2[0x8];                                     // Fixing Size Of Struct 
};

// 0xC0 (0xC0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDelaunayTriangulation2D
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDelaunayTriangulation2D_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F3[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          VertexPositions;                                   // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_IntPoint>          ConstrainedEdges;                                  // 0x80(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions;                              // 0x90(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F8[0x5];                                     // Fixing Size After Last Property  
	TArray<int32>                                PositionsToVertexIDs;                              // 0x98(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHasDuplicateVertices;                             // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FE[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xB0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xB8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A29[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSteps;                                       // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSteps;                                       // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapped;                                           // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A33[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A35[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A56[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepWidth;                                         // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepHeight;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerRadius;                                       // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveAngle;                                        // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSteps;                                          // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFloating;                                         // 0x84(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A59[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A5C[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7E[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseRadius;                                        // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopRadius;                                         // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSteps;                                       // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSteps;                                       // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapped;                                           // 0x84(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x85(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A83[0x2];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A88[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAC[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineLength;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HemisphereSteps;                                   // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CircleSteps;                                       // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB2[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB6[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF8[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionX;                                        // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionY;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DimensionZ;                                        // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsX;                                            // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsY;                                            // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsZ;                                            // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x88(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B05[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBoundingBox
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPrimitiveOptions PrimitiveOptions;                                  // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2D[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box;                                               // 0x70(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        StepsX;                                            // 0xA8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsY;                                            // 0xAC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StepsZ;                                            // 0xB0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B31[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xB8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B36[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
struct UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BDD[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
struct UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF6[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidVertex;                                    // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C07[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1E[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedVertices
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedVertices_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C30[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                Vertices;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedTriangles
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5C[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                Triangles;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
struct UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidUVSet;                                     // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUVSetIsEmpty;                                     // 0xD(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C7B[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Box2D                     ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color1;                                            // 0xC(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color2;                                            // 0x1C(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color3;                                            // 0x2C(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriHasValidVertexColors;                          // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CAE[0x3];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UV1;                                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UV2;                                               // 0x20(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UV3;                                               // 0x30(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHaveValidUVs;                                     // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCE[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFA[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Vertex1;                                           // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vertex2;                                           // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vertex3;                                           // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriHasValidElements;                              // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D22[0x3];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptTriangle Normals;                                           // 0x10(0x48)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTriangle Tangents;                                          // 0x58(0x48)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTriangle BiTangents;                                        // 0xA0(0x48)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xE8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5B[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Normal1;                                           // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal2;                                           // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal3;                                           // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriHasValidNormals;                               // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D65[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D99[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_IntVector                 ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9A[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBD[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DCF[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE5[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DF9[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmbiguousTopologyFound;                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E0B[0x3];                                     // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E31[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E3E[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E64[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeAreaCenter
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeAreaCenter_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceArea;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    CenterOfMass;                                      // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceArea;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ECD[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       ReturnValue;                                       // 0x8(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
struct UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EF0[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
struct UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F0B[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3D[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    BarycentricCoords;                                 // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               DefaultColor;                                      // 0x28(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriHasValidVertexColors;                          // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F43[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               InterpolatedColor;                                 // 0x3C(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F45[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    BarycentricCoords;                                 // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriHasValidUVs;                                   // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F85[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  InterpolatedUV;                                    // 0x30(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FD7[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    BarycentricCoords;                                 // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FD9[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    InterpolatedPosition;                              // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_301E[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    BarycentricCoords;                                 // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriHasValidElements;                              // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3021[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    InterpolatedNormal;                                // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InterpolatedTangent;                               // 0x48(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InterpolatedBiTangent;                             // 0x60(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3055[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    BarycentricCoords;                                 // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriHasValidNormals;                               // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3060[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    InterpolatedNormal;                                // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3077[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3089[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_309A[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30CA[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30DA[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30E5[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList PositionList;                                      // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bSkipGaps;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3105[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList VertexIDList;                                      // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bHasVertexIDGaps;                                  // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3141[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptTriangleList TriangleList;                                      // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bSkipGaps;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTriangleIDGaps;                                // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_318E[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDList;                                    // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bHasTriangleIDGaps;                                // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31D0[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllSplitUVsAtVertex
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllSplitUVsAtVertex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexID;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ElementIDs;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          ElementUVs;                                        // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHaveValidUVs;                                     // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3205[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
struct UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3259[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Point;                                             // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vertex1;                                           // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vertex2;                                           // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vertex3;                                           // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    BarycentricCoords;                                 // 0x70(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
struct UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRemeshOptions RemeshOptions;                                     // 0x8(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptUniformRemeshOptions UniformOptions;                                    // 0x24(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
struct UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptWeldEdgesOptions WeldOptions;                                       // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
struct UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeshBowties;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttributeBowties;                                 // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3339[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
struct UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptResolveTJunctionOptions ResolveOptions;                                    // 0x8(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3351[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
struct UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDegenerateTriangleOptions Options;                                           // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
struct UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRemoveSmallComponentOptions Options;                                           // 0x8(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3394[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
struct UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRemoveHiddenTrianglesOptions Options;                                           // 0x8(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_33AF[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
struct UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptFillHolesOptions FillOptions;                                       // 0x8(0x2)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_33D1[0x2];                                     // Fixing Size After Last Property  
	int32                                        NumFilledHoles;                                    // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFailedHoleFills;                                // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33D3[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
struct UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptions NonUniformOptions;                                 // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList VertexWeights;                                     // 0x38(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Samples;                                           // 0x48(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               SampleRadii;                                       // 0x58(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDs;                                       // 0x68(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Samples;                                           // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDs;                                       // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptions NonUniformOptions;                                 // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Samples;                                           // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               SampleRadii;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList TriangleIDs;                                       // 0x58(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x70(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PlaneOrigin;                                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PlaneNormal;                                       // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x49(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B2[0x2];                                     // Fixing Size After Last Property  
	int32                                        MinNumTrianglePoints;                              // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SphereOrigin;                                      // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SphereRadius;                                      // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D2[0x2];                                     // Fixing Size After Last Property  
	int32                                        MinNumTrianglePoints;                              // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          SelectionMesh;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 SelectionMeshTransform;                            // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F9[0x6];                                     // Fixing Size After Last Property  
	double                                       ShellDistance;                                     // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       WindingThreshold;                                  // 0x90(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinNumTrianglePoints;                              // 0x98(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FD[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FE[0x8];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box;                                               // 0x18(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x51(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3557[0x2];                                     // Fixing Size After Last Property  
	int32                                        MinNumTrianglePoints;                              // 0x54(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MaxAngleDeg;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_357D[0x2];                                     // Fixing Size After Last Property  
	int32                                        MinNumTrianglePoints;                              // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection NewSelection;                                      // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bOnlyToConnected;                                  // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3590[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
struct UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B0[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumSelected;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
struct UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection NewSelection;                                      // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptTopologyConnectionType ConnectionType;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C8[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection NewSelection;                                      // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        Iterations;                                        // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContract;                                         // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyExpandToFaceNeighbours;                       // 0x2D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35ED[0x2];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bDisable;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FD[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3607[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptIndexType          ResultListType;                                    // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptIndexType          ConvertToType;                                     // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3619[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<int32>                                IndexArray;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_362E[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection FromSelection;                                     // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection ToSelection;                                       // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  NewType;                                           // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPartialInclusion;                            // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3653[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<int32>                                  IndexSet;                                          // 0x8(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3668[0x7];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x60(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptIndexList IndexList;                                         // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3679[0x7];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x28(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                IndexArray;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368B[0x7];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
struct UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptMeshSelection SelectionA;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection SelectionB;                                        // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection ResultSelection;                                   // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptCombineSelectionMode CombineMode;                                       // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A6[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
struct UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       SelectionBounds;                                   // 0x18(0x38)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsEmpty;                                          // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36DB[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x58(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
struct UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct GeometryScriptingCore_GeometryScriptIndexList> IndexLoops;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct GeometryScriptingCore_GeometryScriptPolyPath> PathLoops;                                         // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumLoops;                                          // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundErrors;                                      // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3711[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexCount;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions Options;                                           // 0xC(0x7)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_373B[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleCount;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions Options;                                           // 0xC(0x7)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3761[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions Options;                                           // 0xC(0x7)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_377B[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolygroupSimplifyOptions Options;                                           // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGroupLayer GroupLayer;                                        // 0x10(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPlanarSimplifyOptions Options;                                           // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.SelectMeshElementsInBoxWithBVH
struct UGeometryScriptLibrary_MeshSpatial_SelectMeshElementsInBoxWithBVH_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH QueryBVH;                                          // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       QueryBox;                                          // 0x28(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions Options;                                           // 0x60(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3804[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x70(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3808[0x3];                                     // Fixing Size After Last Property  
	int32                                        MinNumTrianglePoints;                              // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
struct UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH ResetBVH;                                          // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
struct UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH UpdateBVH;                                         // 0x8(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOnlyIfInvalid;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3847[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
struct UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH QueryBVH;                                          // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    QueryPoint;                                        // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions Options;                                           // 0x40(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsInside;                                         // 0x4C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptContainmentOutcomePins Outcome;                                           // 0x4D(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3885[0x2];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
struct UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH TestBVH;                                           // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A0[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
struct UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH QueryBVH;                                          // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RayOrigin;                                         // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RayDirection;                                      // 0x40(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions Options;                                           // 0x58(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E3[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptRayHitResult HitResult;                                         // 0x68(0x40)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptSearchOutcomePins  Outcome;                                           // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E8[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0xB0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xB8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
struct UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH QueryBVH;                                          // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    QueryPoint;                                        // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions Options;                                           // 0x40(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3920[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptTrianglePoint NearestResult;                                     // 0x50(0x38)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptSearchOutcomePins  Outcome;                                           // 0x88(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3921[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
struct UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH OutputBVH;                                         // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TessellationLevel;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3966[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSelectiveTessellateOptions Options;                                           // 0x18(0x2)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_399F[0x2];                                     // Fixing Size After Last Property  
	int32                                        TessellationLevel;                                 // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectiveTessellatePatternType   PatternType;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A2[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPNTessellateOptions Options;                                           // 0x8(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_39BF[0x3];                                     // Fixing Size After Last Property  
	int32                                        TessellationLevel;                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PivotLocation;                                     // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translation;                                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translation;                                       // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3D[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4A[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixOrientationForNegativeScale;                   // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4C[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4E[0x8];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ScaleOrigin;                                       // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ScaleOrigin;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixOrientationForNegativeScale;                   // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A72[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RotationOrigin;                                    // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RotationOrigin;                                    // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB8[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Translation;                                       // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
struct UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUVSets;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACF[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE3[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 PlaneTransform;                                    // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x70(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF5[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CylinderTransform;                                 // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x70(0x10)(Parm, NativeAccessSpecifierPublic)
	float                                        SplitAngle;                                        // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFA[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFC[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B03[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 BoxTransform;                                      // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x70(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        MinIslandTriCount;                                 // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B07[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B08[0x8];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleID;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptUVTriangle UVs;                                               // 0x10(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsValidTriangle;                                  // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferChangeNotifications;                         // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B15[0x6];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1F[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Scale;                                             // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  ScaleOrigin;                                       // 0x20(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x30(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAngle;                                     // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  RotationOrigin;                                    // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRepackUVsOptions RepackOptions;                                     // 0xC(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3C[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptRecomputeUVsOptions Options;                                           // 0xC(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x28(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
struct UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B62[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       MeshArea;                                          // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       UVArea;                                            // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       MeshBounds;                                        // 0x30(0x38)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box2D                     UVBounds;                                          // 0x68(0x28)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsValidUVSet;                                     // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundUnsetUVs;                                    // 0x91(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyIncludeValidUVTris;                           // 0x92(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B68[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
struct UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B79[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bIsValidUVSet;                                     // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVertexIDGaps;                                  // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasSplitUVs;                                      // 0x22(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7B[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
struct UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FromUVSet;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ToUVSet;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
struct UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params
{
public:
	class UDynamicMesh*                          CopyFromMesh;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B93[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          CopyToUVMesh;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToUVMeshOut;                                   // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvalidTopology;                                  // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidUVSet;                                     // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9A[0x6];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
struct UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params
{
public:
	class UDynamicMesh*                          CopyFromUVMesh;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ToUVSetIndex;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB8[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          CopyToMesh;                                        // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundTopologyErrors;                              // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidUVSet;                                     // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyUVPositions;                                  // 0x22(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BBD[0x5];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ComputeMeshLocalUVParam
struct UGeometryScriptLibrary_MeshUVFunctions_ComputeMeshLocalUVParam_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    CenterPoint;                                       // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CenterPointTriangleID;                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD6[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                VertexIDs;                                         // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          VertexUVs;                                         // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       Radius;                                            // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInterpolatedNormal;                            // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDA[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    TangentYDirection;                                 // 0x58(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       UVRotationDeg;                                     // 0x70(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptXAtlasOptions Options;                                           // 0xC(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPatchBuilderOptions Options;                                           // 0xC(0x34)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x18(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorFlags Flags;                                             // 0x28(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCreateColorSeam;                                  // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C20[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorList VertexColorList;                                   // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorFlags Flags;                                             // 0x18(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClearExisting;                                    // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C39[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
struct UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bIsValidColorSet;                                  // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendSplitVertexValues;                           // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C49[0x5];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
struct UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
struct UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.BlurMeshVertexColors
struct UGeometryScriptLibrary_MeshVertexColorFunctions_BlurMeshVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMeshSelection Selection;                                         // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C74[0x4];                                     // Fixing Size After Last Property  
	double                                       Strength;                                          // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptBlurColorMode      BlurMode;                                          // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptBlurMeshVertexColorsOptions Options;                                           // 0x29(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C78[0x3];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
struct UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSolidifyOptions Options;                                           // 0x8(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
struct UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptMorphologyOptions Options;                                           // 0x8(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAD[0x4];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.SetPolygonVertex
struct UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        VertexIndex;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBF[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Position;                                          // 0x18(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPolygonIsEmpty;                                   // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC2[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertexCount
struct UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCF[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertex
struct UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        VertexIndex;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPolygonIsEmpty;                                   // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDA[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonTangent
struct UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        VertexIndex;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPolygonIsEmpty;                                   // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF0[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonBounds
struct UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_Box2D                     ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArea
struct UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArcLength
struct UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.ConvertSplineToPolygon
struct UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions SamplingOptions;                                   // 0x18(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptAxis               DropAxis;                                          // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D25[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArrayOfVector2D
struct UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArray
struct UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayToGeometryScriptSimplePolygon
struct UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Params
{
public:
	TArray<struct CoreUObject_Vector>            PathVertices;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimplePolygon ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayOfVector2DToGeometryScriptSimplePolygon
struct UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Params
{
public:
	TArray<struct CoreUObject_Vector2D>          PathVertices;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimplePolygon ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.AddPolygonVertex
struct UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Polygon;                                           // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Position;                                          // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D84[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsUnion
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bCopyInputOnFailure;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA4[0x7];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffsets
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions OffsetOptions;                                     // 0x10(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       FirstOffset;                                       // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SecondOffset;                                      // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationSuccess;                                 // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyInputOnFailure;                               // 0x49(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBD[0x6];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffset
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions OffsetOptions;                                     // 0x10(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Offset;                                            // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationSuccess;                                 // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyInputOnFailure;                               // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD6[0x6];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyOpen
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions OffsetOptions;                                     // 0x10(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Offset;                                            // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationSuccess;                                 // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyInputOnFailure;                               // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DEC[0x6];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyClose
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions OffsetOptions;                                     // 0x10(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Offset;                                            // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationSuccess;                                 // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyInputOnFailure;                               // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E03[0x6];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsIntersection
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsToIntersect;                               // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsExclusiveOr
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsToExclusiveOr;                             // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsDifference
struct UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsToSubtract;                                // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetSimplePolygon
struct UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bValidIndices;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E42[0x3];                                     // Fixing Size After Last Property  
	int32                                        PolygonIndex;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E45[0x4];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptSimplePolygon ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertices
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          OutVertices;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bValidIndices;                                     // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E53[0x3];                                     // Fixing Size After Last Property  
	int32                                        PolygonIndex;                                      // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleIndex;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E54[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertexCount
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bValidIndices;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E63[0x3];                                     // Fixing Size After Last Property  
	int32                                        PolygonIndex;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertex
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bIsValidVertex;                                    // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E79[0x3];                                     // Fixing Size After Last Property  
	int32                                        VertexIndex;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolygonIndex;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleIndex;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListBounds
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_Box2D                     ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListArea
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonHoleCount
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bValidIndex;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA3[0x3];                                     // Fixing Size After Last Property  
	int32                                        PolygonIndex;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA4[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonCount
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB2[0x4];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonBounds
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bValidIndex;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC2[0x3];                                     // Fixing Size After Last Property  
	int32                                        PolygonIndex;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box2D                     ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonArea
struct UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         bValidIndex;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECB[0x3];                                     // Fixing Size After Last Property  
	int32                                        PolygonIndex;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromPathOffset
struct UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Params
{
public:
	TArray<struct CoreUObject_Vector2D>          Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptions OffsetOptions;                                     // 0x10(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Offset;                                            // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationSuccess;                                 // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyInputOnFailure;                               // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EDE[0x6];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromOpenPolyPathsOffset
struct UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Params
{
public:
	TArray<struct GeometryScriptingCore_GeometryScriptPolyPath> PolyPaths;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptions OffsetOptions;                                     // 0x10(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Offset;                                            // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationSuccess;                                 // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyInputOnFailure;                               // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EEC[0x6];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSinglePolygon
struct UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptSimplePolygon OuterPolygon;                                      // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon> HolePolygons;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bFixHoleOrientations;                              // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF7[0x7];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSimplePolygons
struct UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Params
{
public:
	TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon> OuterPolygons;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AppendPolygonList
struct UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsToAppend;                                  // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AddPolygonToList
struct UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonList;                                       // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSimplePolygon OuterPolygon;                                      // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon> HolePolygons;                                      // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bFixHoleOrientations;                              // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1D[0x3];                                     // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x34(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
struct UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Frames;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               FrameTimes;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions SamplingOptions;                                   // 0x28(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F54[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 RelativeTransform;                                 // 0x40(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeScale;                                     // 0xA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F56[0xF];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F74[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F89[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9F[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FAC[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
struct UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC3[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
struct UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class EGeometryScriptAxis               DropAxis;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FD4[0x7];                                     // Fixing Size After Last Property  
	struct GeometryScriptingCore_GeometryScriptPolyPath ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoints;                                         // 0x64(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath ReturnValue;                                       // 0x68(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params
{
public:
	struct CoreUObject_Vector2D                  Center;                                            // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoints;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoints;                                         // 0x64(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartAngle;                                        // 0x68(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndAngle;                                          // 0x6C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath ReturnValue;                                       // 0x70(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_4008[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params
{
public:
	struct CoreUObject_Vector2D                  Center;                                            // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoints;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartAngle;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndAngle;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions SamplingOptions;                                   // 0x20(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_401D[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          VertexArray;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            VertexArray;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params
{
public:
	TArray<struct CoreUObject_Vector>            VertexArray;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params
{
public:
	TArray<struct CoreUObject_Vector2D>          VertexArray;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector2D>          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptPolyPath PolyPath;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params
{
public:
	TArray<struct CoreUObject_Vector>            PathVertices;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params
{
public:
	TArray<struct CoreUObject_Vector2D>          PathVertices;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptPolyPath ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
struct UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            MaterialList;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
struct UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params
{
public:
	class UDynamicMeshPool*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
struct UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptCopyMeshFromComponentOptions Options;                                           // 0x10(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bTransformToWorld;                                 // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D1[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 LocalToWorld;                                      // 0x20(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D6[0x7];                                     // Fixing Size After Last Property  
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DA[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
struct UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params
{
public:
	class UObject*                               FromObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransformToWorld;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EB[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 LocalToWorld;                                      // 0x20(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseComplexCollision;                              // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EF[0x2];                                     // Fixing Size After Last Property  
	int32                                        SphereResolution;                                  // 0x84(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F2[0x8];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
struct UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ZAxis;                                             // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 ReturnValue;                                       // 0x30(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
struct UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ZAxis;                                             // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TangentAxis;                                       // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTangentIsX;                                       // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4180[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 ReturnValue;                                       // 0x50(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_418D[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x68(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4195[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Ray                       ReturnValue;                                       // 0x68(0x30)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4196[0x8];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_419E[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Plane                     ReturnValue;                                       // 0x70(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
struct UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Ray                       ReturnValue;                                       // 0x30(0x30)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
struct UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params
{
public:
	struct CoreUObject_Vector                    Origin;                                            // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Direction;                                         // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDirectionIsNormalized;                            // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C6[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Ray                       ReturnValue;                                       // 0x38(0x30)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
struct UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x30(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DE[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Ray                       ReturnValue;                                       // 0x98(0x30)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DF[0x8];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
struct UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       StartDistance;                                     // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       EndDistance;                                       // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    StartPoint;                                        // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    EndPoint;                                          // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SphereCenter;                                      // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SphereRadius;                                      // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Distance1;                                         // 0x50(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Distance2;                                         // 0x58(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_420E[0x7];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SegStartPoint;                                     // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SegEndPoint;                                       // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RayParameter;                                      // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RayPoint;                                          // 0x68(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SegPoint;                                          // 0x80(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
struct UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Distance;                                          // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Plane                     Plane;                                             // 0x30(0x20)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       HitDistance;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424F[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
struct UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LineOrigin;                                        // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LineDirection;                                     // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RayParameter;                                      // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RayPoint;                                          // 0x68(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       LineParameter;                                     // 0x80(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LinePoint;                                         // 0x88(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params
{
public:
	struct CoreUObject_Ray                       Ray;                                               // 0x0(0x30)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box;                                               // 0x30(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       HitDistance;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A1[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
struct UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x38(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsiderOnBoxAsInside;                            // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x51(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42C6[0x6];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
struct UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SphereCenter;                                      // 0x38(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SphereRadius;                                      // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D2[0x7];                                     // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
struct UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params
{
public:
	struct CoreUObject_Box                       Box1;                                              // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box2;                                              // 0x38(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42E0[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
struct UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params
{
public:
	struct CoreUObject_Vector                    Center;                                            // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Dimensions;                                        // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       ReturnValue;                                       // 0x30(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
struct UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params
{
public:
	struct CoreUObject_Vector                    Center;                                            // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Extents;                                           // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       ReturnValue;                                       // 0x30(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
struct UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_430F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x40(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       ReturnValue;                                       // 0xA0(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4312[0x8];                                     // Fixing Size Of Struct 
};

// 0x88 (0x88 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
struct UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ExpandBy;                                          // 0x38(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       ReturnValue;                                       // 0x50(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
struct UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Volume;                                            // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SurfaceArea;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
struct UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x38(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
struct UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        FaceIndex;                                         // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434D[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    FaceNormal;                                        // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x58(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
struct UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        CornerIndex;                                       // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4366[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x40(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
struct UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Center;                                            // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Dimensions;                                        // 0x50(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
struct UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params
{
public:
	struct CoreUObject_Box                       Box1;                                              // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box2;                                              // 0x38(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
struct UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params
{
public:
	struct CoreUObject_Box                       Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x38(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInside;                                         // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43B3[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x58(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
struct UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params
{
public:
	struct CoreUObject_Box                       Box1;                                              // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box2;                                              // 0x38(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsIntersecting;                                   // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C0[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Box                       ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
struct UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                Texture;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSampleTextureOptions SampleOptions;                                     // 0x18(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x40(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
struct UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptUVList UVList;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptSampleTextureOptions SampleOptions;                                     // 0x18(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptColorList ColorList;                                         // 0x40(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
struct UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ConstantX;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ConstantY;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ConstantZ;                                         // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SetOnFailure;                                      // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
struct UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
struct UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListB;                                       // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
struct UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListB;                                       // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListB;                                       // 0x10(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	double                                       ConstantA;                                         // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ConstantB;                                         // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
struct UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorListB;                                       // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ConstantA;                                         // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ConstantB;                                         // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x10(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	double                                       ScalarMultiplier;                                  // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ScalarMultiplier;                                  // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListB;                                       // 0x10(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	double                                       ConstantMultiplier;                                // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListB;                                       // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ConstantMultiplier;                                // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	double                                       Numerator;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SetOnFailure;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Epsilon;                                           // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       Numerator;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SetOnFailure;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Epsilon;                                           // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListB;                                       // 0x10(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	double                                       ConstantA;                                         // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ConstantB;                                         // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params
{
public:
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListA;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarListB;                                       // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	double                                       ConstantA;                                         // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ConstantB;                                         // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x8(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList VectorList;                                        // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptVectorList ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x8(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarList;                                        // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct GeometryScriptingCore_GeometryScriptScalarList ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


