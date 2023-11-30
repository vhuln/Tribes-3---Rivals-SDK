#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryScriptingCore.GeometryScriptDebug
// (None)

class UClass* UGeometryScriptDebug::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptDebug");

	return Clss;
}


// GeometryScriptDebug GeometryScriptingCore.Default__GeometryScriptDebug
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptDebug* UGeometryScriptDebug::GetDefaultObj()
{
	static class UGeometryScriptDebug* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptDebug*>(UGeometryScriptDebug::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
// (None)

class UClass* UGeometryScriptLibrary_CollisionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_CollisionFunctions");

	return Clss;
}


// GeometryScriptLibrary_CollisionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_CollisionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_CollisionFunctions* UGeometryScriptLibrary_CollisionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_CollisionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_CollisionFunctions*>(UGeometryScriptLibrary_CollisionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 ToStaticMeshAsset                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToStaticMeshAsset = ToStaticMeshAsset;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 StaticMeshAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         SourceComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSetSimpleCollisionOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, const struct GeometryScriptingCore_GeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromComponent");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params Parms{};

	Parms.StaticMeshAsset = StaticMeshAsset;
	Parms.SourceComponent = SourceComponent;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMeshComponent*       ToDynamicMeshComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, const struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetDynamicMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToDynamicMeshComponent = ToDynamicMeshComponent;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshComponent*       Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEmitTransaction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "ResetDynamicMeshCollision");

	Params::UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params Parms{};

	Parms.Component = Component;
	Parms.bEmitTransaction = bEmitTransaction;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
// (None)

class UClass* UGeometryScriptLibrary_ContainmentFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_ContainmentFunctions");

	return Clss;
}


// GeometryScriptLibrary_ContainmentFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_ContainmentFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_ContainmentFunctions* UGeometryScriptLibrary_ContainmentFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_ContainmentFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_ContainmentFunctions*>(UGeometryScriptLibrary_ContainmentFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMesh                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMeshOut                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       ProjectionFrame                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSweptHullOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct CoreUObject_Transform& ProjectionFrame, const struct GeometryScriptingCore_GeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshSweptHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.ProjectionFrame = ProjectionFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyToMeshOut != nullptr)
		*CopyToMeshOut = Parms.CopyToMeshOut;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMesh                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMeshOut                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptConvexHullOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyToMeshOut != nullptr)
		*CopyToMeshOut = Parms.CopyToMeshOut;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMesh                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMeshOut                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptConvexDecompositionOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct GeometryScriptingCore_GeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexDecomposition");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyToMeshOut != nullptr)
		*CopyToMeshOut = Parms.CopyToMeshOut;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
// (None)

class UClass* UGeometryScriptLibrary_ListUtilityFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_ListUtilityFunctions");

	return Clss;
}


// GeometryScriptLibrary_ListUtilityFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_ListUtilityFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_ListUtilityFunctions* UGeometryScriptLibrary_ListUtilityFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_ListUtilityFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_ListUtilityFunctions*>(UGeometryScriptLibrary_ListUtilityFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem(struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, int32 Index, const struct CoreUObject_Vector& NewValue, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.Index = Index;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        NewUV                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem(struct GeometryScriptingCore_GeometryScriptUVList& UVList, int32 Index, const struct CoreUObject_Vector2D& NewUV, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params Parms{};

	Parms.UVList = UVList;
	Parms.Index = Index;
	Parms.NewUV = NewUV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem(struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Index = Index;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem(struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.Index = Index;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem(struct GeometryScriptingCore_GeometryScriptColorList& ColorList, int32 Index, const struct CoreUObject_LinearColor& NewColor, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.Index = Index;
	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, int32 Index, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(const struct GeometryScriptingCore_GeometryScriptUVList& UVList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(const struct GeometryScriptingCore_GeometryScriptUVList& UVList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, int32 Index, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params Parms{};

	Parms.UVList = UVList;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptTriangleListTriangleList                                                     (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params Parms{};

	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptTriangleListTriangleList                                                     (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLastTriangle");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params Parms{};

	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptTriangleListTriangleList                                                     (Parm, NativeAccessSpecifierPublic)
// int32                              Triangle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_IntVector       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_IntVector UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList, int32 Triangle, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params Parms{};

	Parms.TriangleList = TriangleList;
	Parms.Triangle = Triangle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, int32 Index, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, int32 Index, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_LinearColor UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, int32 Index, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              XChannelIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              YChannelIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ZChannelIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, struct GeometryScriptingCore_GeometryScriptVectorList* VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannels");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.XChannelIndex = XChannelIndex;
	Parms.YChannelIndex = YChannelIndex;
	Parms.ZChannelIndex = ZChannelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorList != nullptr)
		*VectorList = std::move(Parms.VectorList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              ChannelIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, struct GeometryScriptingCore_GeometryScriptScalarList* ScalarList, int32 ChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannel");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ChannelIndex = ChannelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarList != nullptr)
		*ScalarList = std::move(Parms.ScalarList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListDuplicateList                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, struct GeometryScriptingCore_GeometryScriptVectorList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptUVListDuplicateList                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, struct GeometryScriptingCore_GeometryScriptUVList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListDuplicateList                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, struct GeometryScriptingCore_GeometryScriptScalarList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListDuplicateList                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, struct GeometryScriptingCore_GeometryScriptIndexList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorListDuplicateList                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, struct GeometryScriptingCore_GeometryScriptColorList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector>  VectorArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, TArray<struct CoreUObject_Vector>* VectorArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertVectorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorArray != nullptr)
		*VectorArray = std::move(Parms.VectorArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>UVArray                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, TArray<struct CoreUObject_Vector2D>* UVArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertUVListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UVArray != nullptr)
		*UVArray = std::move(Parms.UVArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptTriangleListTriangleList                                                     (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_IntVector>TriangleArray                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList, TArray<struct CoreUObject_IntVector>* TriangleArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertTriangleListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params Parms{};

	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleArray != nullptr)
		*TriangleArray = std::move(Parms.TriangleArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<double>                     ScalarArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, TArray<double>* ScalarArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertScalarListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarArray != nullptr)
		*ScalarArray = std::move(Parms.ScalarArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, NativeAccessSpecifierPublic)
// TArray<int32>                      IndexArray                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, TArray<int32>* IndexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertIndexListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexArray != nullptr)
		*IndexArray = std::move(Parms.IndexArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_LinearColor>ColorArray                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, TArray<struct CoreUObject_LinearColor>* ColorArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertColorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorArray != nullptr)
		*ColorArray = std::move(Parms.ColorArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct CoreUObject_Vector>  VectorArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList(TArray<struct CoreUObject_Vector>& VectorArray, struct GeometryScriptingCore_GeometryScriptVectorList* VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params Parms{};

	Parms.VectorArray = VectorArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorList != nullptr)
		*VectorList = std::move(Parms.VectorList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct CoreUObject_Vector2D>UVArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList(TArray<struct CoreUObject_Vector2D>& UVArray, struct GeometryScriptingCore_GeometryScriptUVList* UVList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params Parms{};

	Parms.UVArray = UVArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UVList != nullptr)
		*UVList = std::move(Parms.UVList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct CoreUObject_IntVector>TriangleArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTriangleListTriangleList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList(TArray<struct CoreUObject_IntVector>& TriangleArray, struct GeometryScriptingCore_GeometryScriptTriangleList* TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToTriangleList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params Parms{};

	Parms.TriangleArray = TriangleArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleList != nullptr)
		*TriangleList = std::move(Parms.TriangleList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<double>                     VectorArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList(TArray<double>& VectorArray, struct GeometryScriptingCore_GeometryScriptScalarList* ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params Parms{};

	Parms.VectorArray = VectorArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarList != nullptr)
		*ScalarList = std::move(Parms.ScalarList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      IndexArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptIndexTypeIndexType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList(TArray<int32>& IndexArray, struct GeometryScriptingCore_GeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType IndexType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params Parms{};

	Parms.IndexArray = IndexArray;
	Parms.IndexType = IndexType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexList != nullptr)
		*IndexList = std::move(Parms.IndexList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct CoreUObject_LinearColor>ColorArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList(TArray<struct CoreUObject_LinearColor>& ColorArray, struct GeometryScriptingCore_GeometryScriptColorList* ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params Parms{};

	Parms.ColorArray = ColorArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorList != nullptr)
		*ColorList = std::move(Parms.ColorList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ClearValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, const struct CoreUObject_Vector& ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ClearUV                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList(struct GeometryScriptingCore_GeometryScriptUVList& UVList, const struct CoreUObject_Vector2D& ClearUV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params Parms{};

	Parms.UVList = UVList;
	Parms.ClearUV = ClearUV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// double                             ClearValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, double ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ClearValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, int32 ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     ClearColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList(struct GeometryScriptingCore_GeometryScriptColorList& ColorList, const struct CoreUObject_LinearColor& ClearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ClearColor = ClearColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
// (None)

class UClass* UGeometryScriptLibrary_StaticMeshFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_StaticMeshFunctions");

	return Clss;
}


// GeometryScriptLibrary_StaticMeshFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_StaticMeshFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_StaticMeshFunctions* UGeometryScriptLibrary_StaticMeshFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_StaticMeshFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_StaticMeshFunctions*>(UGeometryScriptLibrary_StaticMeshFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshReadLODRequestedLOD                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UMaterialInterface*>  MaterialList                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      MaterialIndex                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, const struct GeometryScriptingCore_GeometryScriptMeshReadLOD& RequestedLOD, TArray<class UMaterialInterface*>* MaterialList, TArray<int32>* MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "GetSectionMaterialListFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params Parms{};

	Parms.FromStaticMeshAsset = FromStaticMeshAsset;
	Parms.RequestedLOD = RequestedLOD;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaterialList != nullptr)
		*MaterialList = std::move(Parms.MaterialList);

	if (MaterialIndex != nullptr)
		*MaterialIndex = std::move(Parms.MaterialIndex);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 ToStaticMeshAsset                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptionsOptions                                                          (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshWriteLODTargetLod                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToStaticMeshAsset = ToStaticMeshAsset;
	Parms.Options = Options;
	Parms.TargetLod = TargetLod;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               ToSkeletalMeshAsset                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptionsOptions                                                          (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshWriteLODTargetLod                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, const struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToSkeletalMeshAsset = ToSkeletalMeshAsset;
	Parms.Options = Options;
	Parms.TargetLod = TargetLod;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ToDynamicMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshReadLODRequestedLOD                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct GeometryScriptingCore_GeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params Parms{};

	Parms.FromStaticMeshAsset = FromStaticMeshAsset;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.AssetOptions = AssetOptions;
	Parms.RequestedLOD = RequestedLOD;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               FromSkeletalMeshAsset                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ToDynamicMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshReadLODRequestedLOD                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct GeometryScriptingCore_GeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params Parms{};

	Parms.FromSkeletalMeshAsset = FromSkeletalMeshAsset;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.AssetOptions = AssetOptions;
	Parms.RequestedLOD = RequestedLOD;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBakeFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBakeFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBakeFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBakeFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBakeFunctions* UGeometryScriptLibrary_MeshBakeFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBakeFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBakeFunctions*>(UGeometryScriptLibrary_MeshBakeFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeVertexColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeVertexColor");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  SourceTexture                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SourceUVLayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32 SourceUVLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params Parms{};

	Parms.SourceTexture = SourceTexture;
	Parms.SourceUVLayer = SourceUVLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTangentNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTangentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypePosition");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeObjectNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeObjectNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UTexture2D*>          MaterialIDSourceTextures                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              SourceUVLayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMultiTexture(TArray<class UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMultiTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params Parms{};

	Parms.MaterialIDSourceTextures = MaterialIDSourceTextures;
	Parms.SourceUVLayer = SourceUVLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMaterialID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMaterialID");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeFaceNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeFaceNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EGeometryScriptBakeCurvatureTypeModeCurvatureType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptBakeCurvatureColorModeColorMapping                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ColorRangeMultiplier                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinRangeMultiplier                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptBakeCurvatureClampModeClamping                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType, enum class EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode Clamping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeCurvature");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params Parms{};

	Parms.CurvatureType = CurvatureType;
	Parms.ColorMapping = ColorMapping;
	Parms.ColorRangeMultiplier = ColorRangeMultiplier;
	Parms.MinRangeMultiplier = MinRangeMultiplier;
	Parms.Clamping = Clamping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpreadAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeBentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params Parms{};

	Parms.OcclusionRays = OcclusionRays;
	Parms.MaxDistance = MaxDistance;
	Parms.SpreadAngle = SpreadAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpreadAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BiasAngle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTypeOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeAmbientOcclusion");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params Parms{};

	Parms.OcclusionRays = OcclusionRays;
	Parms.MaxDistance = MaxDistance;
	Parms.SpreadAngle = SpreadAngle;
	Parms.BiasAngle = BiasAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       TargetTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                SourceMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       SourceTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeOutputTypeBakeTypes                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeVertexOptionsBakeOptions                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, const struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct CoreUObject_Transform& SourceTransform, const struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptions& SourceOptions, const struct GeometryScriptingCore_GeometryScriptBakeOutputType& BakeTypes, const struct GeometryScriptingCore_GeometryScriptBakeVertexOptions& BakeOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeVertex");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.TargetOptions = TargetOptions;
	Parms.SourceMesh = SourceMesh;
	Parms.SourceTransform = SourceTransform;
	Parms.SourceOptions = SourceOptions;
	Parms.BakeTypes = BakeTypes;
	Parms.BakeOptions = BakeOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       TargetLocalToWorld                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>              SourceActors                                                     (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeRenderCaptureOptionsBakeOptions                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRenderCaptureTexturesReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptRenderCaptureTextures UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetLocalToWorld, const struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions& TargetOptions, const TArray<class AActor*>& SourceActors, const struct GeometryScriptingCore_GeometryScriptBakeRenderCaptureOptions& BakeOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTextureFromRenderCaptures");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetLocalToWorld = TargetLocalToWorld;
	Parms.TargetOptions = TargetOptions;
	Parms.SourceActors = SourceActors;
	Parms.BakeOptions = BakeOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       TargetTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                SourceMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       SourceTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptBakeTypeOptions>BakeTypes                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBakeTextureOptionsBakeOptions                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture2D*> UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, const struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct CoreUObject_Transform& SourceTransform, const struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptions& SourceOptions, TArray<struct GeometryScriptingCore_GeometryScriptBakeTypeOptions>& BakeTypes, const struct GeometryScriptingCore_GeometryScriptBakeTextureOptions& BakeOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.TargetOptions = TargetOptions;
	Parms.SourceMesh = SourceMesh;
	Parms.SourceTransform = SourceTransform;
	Parms.SourceOptions = SourceOptions;
	Parms.BakeTypes = BakeTypes;
	Parms.BakeOptions = BakeOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBasicEditFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBasicEditFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBasicEditFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBasicEditFunctions* UGeometryScriptLibrary_MeshBasicEditFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBasicEditFunctions*>(UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          NewPosition                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidVertex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, const struct CoreUObject_Vector& NewPosition, bool* bIsValidVertex, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetVertexPosition");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.NewPosition = NewPosition;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidVertex != nullptr)
		*bIsValidVertex = Parms.bIsValidVertex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListPositionList                                                     (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& PositionList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetAllMeshVertexPositions");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PositionList = PositionList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DiscardMeshAttributes");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListVertexList                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              NumDeleted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& VertexList, int32* NumDeleted, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVerticesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexList = VertexList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumDeleted != nullptr)
		*NumDeleted = Parms.NumDeleted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasVertexDeleted                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32 VertexID, bool* bWasVertexDeleted, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVertexFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bWasVertexDeleted != nullptr)
		*bWasVertexDeleted = Parms.bWasVertexDeleted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleList                                                     (Parm, NativeAccessSpecifierPublic)
// int32                              NumDeleted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleList, int32* NumDeleted, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleList = TriangleList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumDeleted != nullptr)
		*NumDeleted = Parms.NumDeleted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasTriangleDeleted                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bWasTriangleDeleted, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTriangleFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bWasTriangleDeleted != nullptr)
		*bWasTriangleDeleted = Parms.bWasTriangleDeleted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              NumDeleted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32* NumDeleted, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteSelectedTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumDeleted != nullptr)
		*NumDeleted = Parms.NumDeleted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                AppendMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Transform>AppendTransforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       ConstantTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConstantTransformIsRelative                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptAppendMeshOptionsAppendOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, TArray<struct CoreUObject_Transform>& AppendTransforms, const struct CoreUObject_Transform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct GeometryScriptingCore_GeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshTransformed");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendMesh = AppendMesh;
	Parms.AppendTransforms = AppendTransforms;
	Parms.ConstantTransform = ConstantTransform;
	Parms.bConstantTransformIsRelative = bConstantTransformIsRelative;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                AppendMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       AppendTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RepeatCount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bApplyTransformToFirstInstance                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptAppendMeshOptionsAppendOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct CoreUObject_Transform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct GeometryScriptingCore_GeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshRepeated");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendMesh = AppendMesh;
	Parms.AppendTransform = AppendTransform;
	Parms.RepeatCount = RepeatCount;
	Parms.bApplyTransformToFirstInstance = bApplyTransformToFirstInstance;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                AppendMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       AppendTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptAppendMeshOptionsAppendOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct CoreUObject_Transform& AppendTransform, bool bDeferChangeNotifications, const struct GeometryScriptingCore_GeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendMesh = AppendMesh;
	Parms.AppendTransform = AppendTransform;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimpleMeshBuffersBuffers                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListNewTriangleIndicesList                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              MaterialID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptSimpleMeshBuffers& Buffers, struct GeometryScriptingCore_GeometryScriptIndexList* NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendBuffersToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Buffers = Buffers;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewTriangleIndicesList != nullptr)
		*NewTriangleIndicesList = std::move(Parms.NewTriangleIndicesList);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListNewPositionsList                                                 (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListNewIndicesList                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& NewPositionsList, struct GeometryScriptingCore_GeometryScriptIndexList* NewIndicesList, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVerticesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewPositionsList = NewPositionsList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewIndicesList != nullptr)
		*NewIndicesList = std::move(Parms.NewIndicesList);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          NewPosition                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewVertexIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& NewPosition, int32* NewVertexIndex, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVertexToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewPosition = NewPosition;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewVertexIndex != nullptr)
		*NewVertexIndex = Parms.NewVertexIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_IntVector       NewTriangle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewTriangleIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewTriangleGroupID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_IntVector& NewTriangle, int32* NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTriangleToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewTriangle = NewTriangle;
	Parms.NewTriangleGroupID = NewTriangleGroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewTriangleIndex != nullptr)
		*NewTriangleIndex = Parms.NewTriangleIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTriangleListNewTrianglesList                                                 (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListNewIndicesList                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              NewTriangleGroupID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTriangleList& NewTrianglesList, struct GeometryScriptingCore_GeometryScriptIndexList* NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTrianglesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewTrianglesList = NewTrianglesList;
	Parms.NewTriangleGroupID = NewTriangleGroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewIndicesList != nullptr)
		*NewIndicesList = std::move(Parms.NewIndicesList);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBoneWeightFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBoneWeightFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBoneWeightFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBoneWeightFunctions* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBoneWeightFunctions*>(UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.TransferBoneWeightsFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                SourceMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTransferBoneWeightsOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTransferBoneWeightsOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "TransferBoneWeightsFromMesh");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Params Parms{};

	Parms.SourceMesh = SourceMesh;
	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>BoneWeights                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsValidVertexID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>& BoneWeights, bool* bIsValidVertexID, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.BoneWeights = BoneWeights;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidVertexID != nullptr)
		*bIsValidVertexID = Parms.bIsValidVertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>BoneWeights                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>& BoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetAllVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.BoneWeights = BoneWeights;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasBoneWeights                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshHasBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasBoneWeights != nullptr)
		*bHasBoneWeights = Parms.bHasBoneWeights;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProfileExisted                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplaceExistingProfile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool* bProfileExisted, bool bReplaceExistingProfile, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshCreateBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bReplaceExistingProfile = bReplaceExistingProfile;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bProfileExisted != nullptr)
		*bProfileExisted = Parms.bProfileExisted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>BoneWeights                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bHasValidBoneWeights                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>* BoneWeights, bool* bHasValidBoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneWeights != nullptr)
		*BoneWeights = std::move(Parms.BoneWeights);

	if (bHasValidBoneWeights != nullptr)
		*bHasValidBoneWeights = Parms.bHasValidBoneWeights;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetRootBoneName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetRootBoneName(class UDynamicMesh* TargetMesh, class FName* BoneName, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetRootBoneName");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasBoneWeights                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxBoneIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, int32* MaxBoneIndex, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetMaxBoneWeightIndex");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasBoneWeights != nullptr)
		*bHasBoneWeights = Parms.bHasBoneWeights;

	if (MaxBoneIndex != nullptr)
		*MaxBoneIndex = Parms.MaxBoneIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightBoneWeight                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bHasValidBoneWeights                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32 VertexID, struct GeometryScriptingCore_GeometryScriptBoneWeight* BoneWeight, bool* bHasValidBoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetLargestVertexBoneWeight");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneWeight != nullptr)
		*BoneWeight = std::move(Parms.BoneWeight);

	if (bHasValidBoneWeights != nullptr)
		*bHasValidBoneWeights = Parms.bHasValidBoneWeights;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidBoneName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneInfoBoneInfo                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneInfo(class UDynamicMesh* TargetMesh, class FName BoneName, bool* bIsValidBoneName, struct GeometryScriptingCore_GeometryScriptBoneInfo* BoneInfo, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetBoneInfo");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.BoneName = BoneName;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidBoneName != nullptr)
		*bIsValidBoneName = Parms.bIsValidBoneName;

	if (BoneInfo != nullptr)
		*BoneInfo = std::move(Parms.BoneInfo);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidBoneName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BoneIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneIndex(class UDynamicMesh* TargetMesh, class FName BoneName, bool* bIsValidBoneName, int32* BoneIndex, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetBoneIndex");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.BoneName = BoneName;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidBoneName != nullptr)
		*bIsValidBoneName = Parms.bIsValidBoneName;

	if (BoneIndex != nullptr)
		*BoneIndex = Parms.BoneIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneChildren
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRecursive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidBoneName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo>ChildrenInfo                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneChildren(class UDynamicMesh* TargetMesh, class FName BoneName, bool bRecursive, bool* bIsValidBoneName, TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo>* ChildrenInfo, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetBoneChildren");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.BoneName = BoneName;
	Parms.bRecursive = bRecursive;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidBoneName != nullptr)
		*bIsValidBoneName = Parms.bIsValidBoneName;

	if (ChildrenInfo != nullptr)
		*ChildrenInfo = std::move(Parms.ChildrenInfo);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetAllBonesInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo>BonesInfo                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetAllBonesInfo(class UDynamicMesh* TargetMesh, TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo>* BonesInfo, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetAllBonesInfo");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonesInfo != nullptr)
		*BonesInfo = std::move(Parms.BonesInfo);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.DiscardBonesFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::DiscardBonesFromMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "DiscardBonesFromMesh");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.CopyBonesFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                SourceMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "CopyBonesFromMesh");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Params Parms{};

	Parms.SourceMesh = SourceMesh;
	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeleton*                   Skeleton                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSmoothBoneWeightsOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBoneWeightProfileProfile                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, const struct GeometryScriptingCore_GeometryScriptSmoothBoneWeightsOptions& Options, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "ComputeSmoothBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Skeleton = Skeleton;
	Parms.Options = Options;
	Parms.Profile = Profile;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBooleanFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBooleanFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBooleanFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBooleanFunctions* UGeometryScriptLibrary_MeshBooleanFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBooleanFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBooleanFunctions*>(UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelfUnionOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshSelfUnion");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       CutFrame                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshPlaneSliceOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& CutFrame, const struct GeometryScriptingCore_GeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneSlice");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CutFrame = CutFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       CutFrame                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshPlaneCutOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& CutFrame, const struct GeometryScriptingCore_GeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneCut");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CutFrame = CutFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       MirrorFrame                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshMirrorOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& MirrorFrame, const struct GeometryScriptingCore_GeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshMirror");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MirrorFrame = MirrorFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       TargetTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ToolMesh                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       ToolTransform                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptBooleanOperationOperation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshBooleanOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, class UDynamicMesh* ToolMesh, const struct CoreUObject_Transform& ToolTransform, enum class EGeometryScriptBooleanOperation Operation, const struct GeometryScriptingCore_GeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshBoolean");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.ToolMesh = ToolMesh;
	Parms.ToolTransform = ToolTransform;
	Parms.Operation = Operation;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshComparisonFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshComparisonFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshComparisonFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshComparisonFunctions* UGeometryScriptLibrary_MeshComparisonFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshComparisonFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshComparisonFunctions*>(UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                OtherMesh                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeasureMeshDistanceOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             MaxDistance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             MinDistance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             AverageDistance                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RootMeanSqrDeviation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct GeometryScriptingCore_GeometryScriptMeasureMeshDistanceOptions& Options, double* MaxDistance, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "MeasureDistancesBetweenMeshes");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.OtherMesh = OtherMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaxDistance != nullptr)
		*MaxDistance = Parms.MaxDistance;

	if (MinDistance != nullptr)
		*MinDistance = Parms.MinDistance;

	if (AverageDistance != nullptr)
		*AverageDistance = Parms.AverageDistance;

	if (RootMeanSqrDeviation != nullptr)
		*RootMeanSqrDeviation = Parms.RootMeanSqrDeviation;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                OtherMesh                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIsSameMeshOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsSameMesh                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct GeometryScriptingCore_GeometryScriptIsSameMeshOptions& Options, bool* bIsSameMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsSameMeshAs");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.OtherMesh = OtherMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsSameMesh != nullptr)
		*bIsSameMesh = Parms.bIsSameMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       TargetTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                OtherMesh                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       OtherTransform                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsIntersecting                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, class UDynamicMesh* OtherMesh, const struct CoreUObject_Transform& OtherTransform, bool* bIsIntersecting, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsIntersectingMesh");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.OtherMesh = OtherMesh;
	Parms.OtherTransform = OtherTransform;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsIntersecting != nullptr)
		*bIsIntersecting = Parms.bIsIntersecting;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDecompositionFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshDecompositionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshDecompositionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshDecompositionFunctions* UGeometryScriptLibrary_MeshDecompositionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshDecompositionFunctions*>(UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      ComponentPolygroups                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UDynamicMeshPool*            MeshPool                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByPolygroups");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.MeshPool = MeshPool;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ComponentMeshes != nullptr)
		*ComponentMeshes = std::move(Parms.ComponentMeshes);

	if (ComponentPolygroups != nullptr)
		*ComponentPolygroups = std::move(Parms.ComponentPolygroups);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      ComponentMaterialIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UDynamicMeshPool*            MeshPool                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByMaterialIDs");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MeshPool = MeshPool;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ComponentMeshes != nullptr)
		*ComponentMeshes = std::move(Parms.ComponentMeshes);

	if (ComponentMaterialIDs != nullptr)
		*ComponentMaterialIDs = std::move(Parms.ComponentMaterialIDs);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UDynamicMeshPool*            MeshPool                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByComponents");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MeshPool = MeshPool;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ComponentMeshes != nullptr)
		*ComponentMeshes = std::move(Parms.ComponentMeshes);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                StoreToSubmesh                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleList                                                     (Parm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                StoreToSubmeshOut                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleList, class UDynamicMesh** StoreToSubmeshOut, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "GetSubMeshFromMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.StoreToSubmesh = StoreToSubmesh;
	Parms.TriangleList = TriangleList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StoreToSubmeshOut != nullptr)
		*StoreToSubmeshOut = Parms.StoreToSubmeshOut;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMesh                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMeshOut                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params Parms{};

	Parms.CopyFromMesh = CopyFromMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyToMeshOut != nullptr)
		*CopyToMeshOut = Parms.CopyToMeshOut;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                StoreToSubmesh                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                StoreToSubmeshOut                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAppendToExisting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreserveGroupIDs                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UDynamicMesh** StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshSelectionToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.StoreToSubmesh = StoreToSubmesh;
	Parms.Selection = Selection;
	Parms.bAppendToExisting = bAppendToExisting;
	Parms.bPreserveGroupIDs = bPreserveGroupIDs;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StoreToSubmeshOut != nullptr)
		*StoreToSubmeshOut = Parms.StoreToSubmeshOut;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshDeformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDeformFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshDeformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshDeformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshDeformFunctions* UGeometryScriptLibrary_MeshDeformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshDeformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshDeformFunctions*>(UGeometryScriptLibrary_MeshDeformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTwistWarpOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       TwistOrientation                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TwistAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TwistExtent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTwistWarpOptions& Options, const struct CoreUObject_Transform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyTwistWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.TwistOrientation = TwistOrientation;
	Parms.TwistAngle = TwistAngle;
	Parms.TwistExtent = TwistExtent;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPerlinNoiseOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyPerlinNoiseToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       WarpOrientation                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMathWarpTypeWarpType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMathWarpOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, const struct GeometryScriptingCore_GeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyMathWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.WarpOrientation = WarpOrientation;
	Parms.WarpType = WarpType;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIterativeMeshSmoothingOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyIterativeSmoothingToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptFlareWarpOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       FlareOrientation                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FlarePercentX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FlarePercentY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FlareExtent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptFlareWarpOptions& Options, const struct CoreUObject_Transform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyFlareWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.FlareOrientation = FlareOrientation;
	Parms.FlarePercentX = FlarePercentX;
	Parms.FlarePercentY = FlarePercentY;
	Parms.FlareExtent = FlareExtent;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDisplaceFromTextureOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              UVLayer                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptDisplaceFromTextureOptions& Options, int32 UVLayer, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromTextureMap");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Texture = Texture;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.UVLayer = UVLayer;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Magnitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromPerVertexVectors");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.VectorList = VectorList;
	Parms.Magnitude = Magnitude;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBendWarpOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       BendOrientation                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BendAngle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BendExtent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptBendWarpOptions& Options, const struct CoreUObject_Transform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyBendWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.BendOrientation = BendOrientation;
	Parms.BendAngle = BendAngle;
	Parms.BendExtent = BendExtent;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshGeodesicFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshGeodesicFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshGeodesicFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshGeodesicFunctions* UGeometryScriptLibrary_MeshGeodesicFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshGeodesicFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshGeodesicFunctions*>(UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestVertexPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartVertexID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndVertexID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListVertexIDList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bFoundErrors                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath(class UDynamicMesh* TargetMesh, int32 StartVertexID, int32 EndVertexID, struct GeometryScriptingCore_GeometryScriptIndexList* VertexIDList, bool* bFoundErrors, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshGeodesicFunctions", "GetShortestVertexPath");

	Params::UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.StartVertexID = StartVertexID;
	Parms.EndVertexID = EndVertexID;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexIDList != nullptr)
		*VertexIDList = std::move(Parms.VertexIDList);

	if (bFoundErrors != nullptr)
		*bFoundErrors = Parms.bFoundErrors;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestSurfacePath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartTriangleID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          StartBaryCoords                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndTriangleID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          EndBaryCoords                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathShortestPath                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bFoundErrors                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath(class UDynamicMesh* TargetMesh, int32 StartTriangleID, const struct CoreUObject_Vector& StartBaryCoords, int32 EndTriangleID, const struct CoreUObject_Vector& EndBaryCoords, struct GeometryScriptingCore_GeometryScriptPolyPath* ShortestPath, bool* bFoundErrors, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshGeodesicFunctions", "GetShortestSurfacePath");

	Params::UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.StartTriangleID = StartTriangleID;
	Parms.StartBaryCoords = StartBaryCoords;
	Parms.EndTriangleID = EndTriangleID;
	Parms.EndBaryCoords = EndBaryCoords;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ShortestPath != nullptr)
		*ShortestPath = std::move(Parms.ShortestPath);

	if (bFoundErrors != nullptr)
		*bFoundErrors = Parms.bFoundErrors;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.CreateSurfacePath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartTriangleID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          StartBaryCoords                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathSurfacePath                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bFoundErrors                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshGeodesicFunctions::CreateSurfacePath(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& Direction, int32 StartTriangleID, const struct CoreUObject_Vector& StartBaryCoords, float MaxPathLength, struct GeometryScriptingCore_GeometryScriptPolyPath* SurfacePath, bool* bFoundErrors, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshGeodesicFunctions", "CreateSurfacePath");

	Params::UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Direction = Direction;
	Parms.StartTriangleID = StartTriangleID;
	Parms.StartBaryCoords = StartBaryCoords;
	Parms.MaxPathLength = MaxPathLength;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SurfacePath != nullptr)
		*SurfacePath = std::move(Parms.SurfacePath);

	if (bFoundErrors != nullptr)
		*bFoundErrors = Parms.bFoundErrors;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshMaterialFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshMaterialFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshMaterialFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshMaterialFunctions* UGeometryScriptLibrary_MeshMaterialFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshMaterialFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshMaterialFunctions*>(UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, int32 MaterialID, bool* bIsValidTriangle, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              PolygroupID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidPolygroupID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32 MaterialID, bool* bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetPolygroupMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupID = PolygroupID;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidPolygroupID != nullptr)
		*bIsValidPolygroupID = Parms.bIsValidPolygroupID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDList                                                   (Parm, NativeAccessSpecifierPublic)
// int32                              MaterialID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDOnTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleIDList = TriangleIDList;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              MaterialID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDForMeshSelection");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleMaterialIDList                                           (Parm, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleMaterialIDList = TriangleMaterialIDList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FromMaterialID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ToMaterialID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32 FromMaterialID, int32 ToMaterialID, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "RemapMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromMaterialID = FromMaterialID;
	Parms.ToMaterialID = ToMaterialID;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDList                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleIDList != nullptr)
		*TriangleIDList = std::move(Parms.TriangleIDList);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasMaterialIDs                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool* bHasMaterialIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaxMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasMaterialIDs != nullptr)
		*bHasMaterialIDs = Parms.bHasMaterialIDs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDList                                                   (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListMaterialIDList                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleIDList, struct GeometryScriptingCore_GeometryScriptIndexList* MaterialIDList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaterialIDsOfTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleIDList = TriangleIDList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaterialIDList != nullptr)
		*MaterialIDList = std::move(Parms.MaterialIDList);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListMaterialIDList                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bHasMaterialIDs                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptIndexList* MaterialIDList, bool* bHasMaterialIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaterialIDList != nullptr)
		*MaterialIDList = std::move(Parms.MaterialIDList);

	if (bHasMaterialIDs != nullptr)
		*bHasMaterialIDs = Parms.bHasMaterialIDs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "EnableMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaterialID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumDeleted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, int32* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "DeleteTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumDeleted != nullptr)
		*NumDeleted = Parms.NumDeleted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMaterialInterface*>  SourceMaterialList                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UMaterialInterface*>  CompactedMaterialList                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs(class UDynamicMesh* TargetMesh, const TArray<class UMaterialInterface*>& SourceMaterialList, TArray<class UMaterialInterface*>* CompactedMaterialList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "CompactMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SourceMaterialList = SourceMaterialList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CompactedMaterialList != nullptr)
		*CompactedMaterialList = std::move(Parms.CompactedMaterialList);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ClearValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32 ClearValue, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "ClearMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ClearValue = ClearValue;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshModelingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshModelingFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshModelingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshModelingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshModelingFunctions* UGeometryScriptLibrary_MeshModelingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshModelingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshModelingFunctions*>(UGeometryScriptLibrary_MeshModelingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshOffsetOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshShell");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshBevelOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshPolygroupBevel");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshOffsetFacesOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshOffsetFacesOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshOffsetOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffset");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshLinearExtrudeOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshLinearExtrudeOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshLinearExtrudeFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshInsetOutsetFacesOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshInsetOutsetFacesOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshInsetOutsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshExtrudeOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshExtrude_Compatibility_5p0");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionNewTriangles                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshEditPolygroupOptionsGroupOptions                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewTriangles, const struct GeometryScriptingCore_GeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDuplicateFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.GroupOptions = GroupOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewTriangles != nullptr)
		*NewTriangles = std::move(Parms.NewTriangles);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               bAllowBowtiesInOutput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDisconnectFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.bAllowBowtiesInOutput = bAllowBowtiesInOutput;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshBevelSelectionModeBevelMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshBevelSelectionOptionsBevelOptions                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct GeometryScriptingCore_GeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshBevelSelection");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.BevelMode = BevelMode;
	Parms.BevelOptions = BevelOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshNormalsFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshNormalsFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshNormalsFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshNormalsFunctions* UGeometryScriptLibrary_MeshNormalsFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshNormalsFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshNormalsFunctions*>(UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdateNormal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          NewNormal                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdateTangents                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          NewTangentX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          NewTangentY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidVertex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMergeSplitValues                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32 VertexID, bool bUpdateNormal, const struct CoreUObject_Vector& NewNormal, bool bUpdateTangents, const struct CoreUObject_Vector& NewTangentX, const struct CoreUObject_Vector& NewTangentY, bool* bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "UpdateVertexNormal");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.bUpdateNormal = bUpdateNormal;
	Parms.NewNormal = NewNormal;
	Parms.bUpdateTangents = bUpdateTangents;
	Parms.NewTangentX = NewTangentX;
	Parms.NewTangentY = NewTangentY;
	Parms.bMergeSplitValues = bMergeSplitValues;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidVertex != nullptr)
		*bIsValidVertex = Parms.bIsValidVertex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerFaceNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTriangleNormals                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct GeometryScriptingCore_GeometryScriptTriangle& Normals, bool* bIsValidTriangle, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshTriangleNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.Normals = Normals;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListTangentXList                                                     (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListTangentYList                                                     (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& TangentXList, const struct GeometryScriptingCore_GeometryScriptVectorList& TangentYList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TangentXList = TangentXList;
	Parms.TangentYList = TangentYList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVertexNormalList                                                 (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& VertexNormalList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexNormalList = VertexNormalList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormalsForMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormalsForMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions& CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "RecomputeNormalsForMeshSelection");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormalsForMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.CalculateOptions = CalculateOptions;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions& CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "RecomputeNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CalculateOptions = CalculateOptions;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListTangentXList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListTangentYList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bIsValidTangentSet                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasVertexIDGaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAverageSplitVertexValues                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptVectorList* TangentXList, struct GeometryScriptingCore_GeometryScriptVectorList* TangentYList, bool* bIsValidTangentSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bAverageSplitVertexValues = bAverageSplitVertexValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TangentXList != nullptr)
		*TangentXList = std::move(Parms.TangentXList);

	if (TangentYList != nullptr)
		*TangentYList = std::move(Parms.TangentYList);

	if (bIsValidTangentSet != nullptr)
		*bIsValidTangentSet = Parms.bIsValidTangentSet;

	if (bHasVertexIDGaps != nullptr)
		*bHasVertexIDGaps = Parms.bHasVertexIDGaps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListNormalList                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bIsValidNormalSet                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasVertexIDGaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAverageSplitVertexValues                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptVectorList* NormalList, bool* bIsValidNormalSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bAverageSplitVertexValues = bAverageSplitVertexValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NormalList != nullptr)
		*NormalList = std::move(Parms.NormalList);

	if (bIsValidNormalSet != nullptr)
		*bIsValidNormalSet = Parms.bIsValidNormalSet;

	if (bHasVertexIDGaps != nullptr)
		*bHasVertexIDGaps = Parms.bHasVertexIDGaps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasTangents                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool* bHasTangents, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshHasTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasTangents != nullptr)
		*bHasTangents = Parms.bHasTangents;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "FlipNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "DiscardTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTangentsOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTangentsOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSplitNormalsOptionsSplitOptions                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptSplitNormalsOptions& SplitOptions, const struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeSplitNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SplitOptions = SplitOptions;
	Parms.CalculateOptions = CalculateOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "AutoRepairNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPolygroupFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshPolygroupFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshPolygroupFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshPolygroupFunctions* UGeometryScriptLibrary_MeshPolygroupFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshPolygroupFunctions*>(UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              SetPolygroupIDOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SetPolygroupID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGenerateNewPolygroup                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32* SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetPolygroupForMeshSelection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.Selection = Selection;
	Parms.SetPolygroupID = SetPolygroupID;
	Parms.bGenerateNewPolygroup = bGenerateNewPolygroup;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SetPolygroupIDOut != nullptr)
		*SetPolygroupIDOut = Parms.SetPolygroupIDOut;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLayers                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32 NumLayers, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NumLayers = NumLayers;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              PolygroupID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDsOut                                                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, struct GeometryScriptingCore_GeometryScriptIndexList& TriangleIDsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupID = PolygroupID;
	Parms.TriangleIDsOut = TriangleIDsOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 TriangleID, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglePolygroupID");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListPolygroupIDsOut                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, struct GeometryScriptingCore_GeometryScriptIndexList& PolygroupIDsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetPolygroupIDsInMesh");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupIDsOut = PolygroupIDsOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListPolygroupIDsOut                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, struct GeometryScriptingCore_GeometryScriptIndexList& PolygroupIDsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetAllTrianglePolygroupIDs");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupIDsOut = PolygroupIDsOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "EnablePolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              PolygroupID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumDeleted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "DeleteTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupID = PolygroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumDeleted != nullptr)
		*NumDeleted = Parms.NumDeleted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerFromGroupLayer                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerToGroupLayer                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& FromGroupLayer, const struct GeometryScriptingCore_GeometryScriptGroupLayer& ToGroupLayer, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "CopyPolygroupsLayer");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromGroupLayer = FromGroupLayer;
	Parms.ToGroupLayer = ToGroupLayer;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              UVLayer                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertUVIslandsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.UVLayer = UVLayer;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertComponentsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bRespectUVSeams                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRespectHardNormals                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             QuadAdjacencyWeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             QuadMetricClamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxSearchRounds                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromPolygonDetection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.bRespectUVSeams = bRespectUVSeams;
	Parms.bRespectHardNormals = bRespectHardNormals;
	Parms.QuadAdjacencyWeight = QuadAdjacencyWeight;
	Parms.QuadMetricClamp = QuadMetricClamp;
	Parms.MaxSearchRounds = MaxSearchRounds;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              CreaseAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinGroupSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, float CreaseAngle, int32 MinGroupSize, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromAngleThreshold");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.CreaseAngle = CreaseAngle;
	Parms.MinGroupSize = MinGroupSize;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ClearValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 ClearValue, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ClearPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.ClearValue = ClearValue;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPrimitiveFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshPrimitiveFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshPrimitiveFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshPrimitiveFunctions* UGeometryScriptLibrary_MeshPrimitiveFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshPrimitiveFunctions*>(UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>VoronoiSites                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVoronoiOptionsVoronoiOptions                                                   (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& VoronoiSites, const struct GeometryScriptingCore_GeometryScriptVoronoiOptions& VoronoiOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendVoronoiDiagram2D");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.VoronoiSites = VoronoiSites;
	Parms.VoronoiOptions = VoronoiOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PolygonVertices                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowSelfIntersections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTriangulatedPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.bAllowSelfIntersections = bAllowSelfIntersections;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRevolveOptionsRevolveOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              MajorRadius                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinorRadius                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MajorSteps                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinorSteps                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTorus");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.RevolveOptions = RevolveOptions;
	Parms.MajorRadius = MajorRadius;
	Parms.MinorRadius = MinorRadius;
	Parms.MajorSteps = MajorSteps;
	Parms.MinorSteps = MinorSteps;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PolylineVertices                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Transform>SweepPath                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      PolylineTexParamU                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      SweepPathTexParamV                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bLoop                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartScale                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndScale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationAngleDeg                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolylineVertices, TArray<struct CoreUObject_Transform>& SweepPath, TArray<float>& PolylineTexParamU, TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolyline");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolylineVertices = PolylineVertices;
	Parms.SweepPath = SweepPath;
	Parms.PolylineTexParamU = PolylineTexParamU;
	Parms.SweepPathTexParamV = SweepPathTexParamV;
	Parms.bLoop = bLoop;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
	Parms.RotationAngleDeg = RotationAngleDeg;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PolygonVertices                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Transform>SweepPath                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bLoop                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCapped                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartScale                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndScale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationAngleDeg                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, TArray<struct CoreUObject_Transform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.SweepPath = SweepPath;
	Parms.bLoop = bLoop;
	Parms.bCapped = bCapped;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
	Parms.RotationAngleDeg = RotationAngleDeg;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PolygonVertices                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRevolveOptionsRevolveOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Steps                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RisePerRevolution                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSpiralRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Radius = Radius;
	Parms.Steps = Steps;
	Parms.RisePerRevolution = RisePerRevolution;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsPhi                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsTheta                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, int32 StepsPhi, int32 StepsTheta, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereLatLong");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.StepsPhi = StepsPhi;
	Parms.StepsTheta = StepsTheta;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsX                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsY                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsZ                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.StepsX = StepsX;
	Parms.StepsY = StepsY;
	Parms.StepsZ = StepsZ;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PolygonVertices                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector>  SweepPath                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bLoop                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCapped                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartScale                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndScale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, TArray<struct CoreUObject_Vector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleSweptPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.SweepPath = SweepPath;
	Parms.bLoop = bLoop;
	Parms.bCapped = bCapped;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PolygonVertices                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HeightSteps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCapped                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleExtrudePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.Height = Height;
	Parms.HeightSteps = HeightSteps;
	Parms.bCapped = bCapped;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CornerRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsRound                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.CornerRadius = CornerRadius;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.StepsRound = StepsRound;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CornerRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsRound                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.CornerRadius = CornerRadius;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.StepsRound = StepsRound;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PolygonVertices                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRevolveOptionsRevolveOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Steps                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Radius = Radius;
	Parms.Steps = Steps;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>PathVertices                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRevolveOptionsRevolveOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Steps                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCapped                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PathVertices, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool bCapped, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePath");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PathVertices = PathVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Steps = Steps;
	Parms.bCapped = bCapped;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendPolygonListTriangulation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolygonsTriangulationOptionsTriangulationOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bTriangulationError                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendPolygonListTriangulation(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonsTriangulationOptions& TriangulationOptions, bool* bTriangulationError, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendPolygonListTriangulation");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendPolygonListTriangulation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonList = PolygonList;
	Parms.TriangulationOptions = TriangulationOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriangulationError != nullptr)
		*bTriangulationError = Parms.bTriangulationError;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StepWidth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StepHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StepDepth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSteps                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFloating                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendLinearStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.StepWidth = StepWidth;
	Parms.StepHeight = StepHeight;
	Parms.StepDepth = StepDepth;
	Parms.NumSteps = NumSteps;
	Parms.bFloating = bFloating;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AngleSteps                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SpokeSteps                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAngle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HoleRadius                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendDisc");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.AngleSteps = AngleSteps;
	Parms.SpokeSteps = SpokeSteps;
	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;
	Parms.HoleRadius = HoleRadius;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDelaunayTriangulation2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>VertexPositions                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_IntPoint>ConstrainedEdges                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptConstrainedDelaunayTriangulationOptionsTriangulationOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<int32>                      PositionsToVertexIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bHasDuplicateVertices                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDelaunayTriangulation2D(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& VertexPositions, TArray<struct CoreUObject_IntPoint>& ConstrainedEdges, const struct GeometryScriptingCore_GeometryScriptConstrainedDelaunayTriangulationOptions& TriangulationOptions, TArray<int32>* PositionsToVertexIDs, bool* bHasDuplicateVertices, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendDelaunayTriangulation2D");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDelaunayTriangulation2D_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.VertexPositions = VertexPositions;
	Parms.ConstrainedEdges = ConstrainedEdges;
	Parms.TriangulationOptions = TriangulationOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PositionsToVertexIDs != nullptr)
		*PositionsToVertexIDs = std::move(Parms.PositionsToVertexIDs);

	if (bHasDuplicateVertices != nullptr)
		*bHasDuplicateVertices = Parms.bHasDuplicateVertices;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RadialSteps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HeightSteps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCapped                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCylinder");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.Height = Height;
	Parms.RadialSteps = RadialSteps;
	Parms.HeightSteps = HeightSteps;
	Parms.bCapped = bCapped;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StepWidth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StepHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InnerRadius                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurveAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSteps                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFloating                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCurvedStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.StepWidth = StepWidth;
	Parms.StepHeight = StepHeight;
	Parms.InnerRadius = InnerRadius;
	Parms.CurveAngle = CurveAngle;
	Parms.NumSteps = NumSteps;
	Parms.bFloating = bFloating;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BaseRadius                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TopRadius                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RadialSteps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HeightSteps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCapped                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCone");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.BaseRadius = BaseRadius;
	Parms.TopRadius = TopRadius;
	Parms.Height = Height;
	Parms.RadialSteps = RadialSteps;
	Parms.HeightSteps = HeightSteps;
	Parms.bCapped = bCapped;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LineLength                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HemisphereSteps                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CircleSteps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCapsule");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.LineLength = LineLength;
	Parms.HemisphereSteps = HemisphereSteps;
	Parms.CircleSteps = CircleSteps;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DimensionZ                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsX                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsY                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsZ                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.DimensionZ = DimensionZ;
	Parms.StepsX = StepsX;
	Parms.StepsY = StepsY;
	Parms.StepsZ = StepsZ;
	Parms.Origin = Origin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBoundingBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              StepsX                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsY                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StepsZ                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBoundingBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, const struct CoreUObject_Box& Box, int32 StepsX, int32 StepsY, int32 StepsZ, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendBoundingBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Box = Box;
	Parms.StepsX = StepsX;
	Parms.StepsY = StepsY;
	Parms.StepsZ = StepsZ;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshQueryFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshQueryFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshQueryFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshQueryFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshQueryFunctions* UGeometryScriptLibrary_MeshQueryFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshQueryFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshQueryFunctions*>(UGeometryScriptLibrary_MeshQueryFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(class UDynamicMesh* TargetMesh, int32 VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidVertexID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(class UDynamicMesh* TargetMesh, int32 TriangleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidTriangleID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidVertex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, bool* bIsValidVertex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexPosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidVertex != nullptr)
		*bIsValidVertex = Parms.bIsValidVertex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexCount");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedVertices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>* Vertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexConnectedVertices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedVertices_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedTriangles(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>* Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexConnectedTriangles");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidUVSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUVSetIsEmpty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box2D           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box2D UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32 UvSetIndex, bool* bIsValidUVSet, bool* bUVSetIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetUVSetBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	if (bUVSetIsEmpty != nullptr)
		*bUVSetIsEmpty = Parms.bUVSetIsEmpty;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     Color1                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     Color2                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     Color3                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriHasValidVertexColors                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32 TriangleID, struct CoreUObject_LinearColor* Color1, struct CoreUObject_LinearColor* Color2, struct CoreUObject_LinearColor* Color3, bool* bTriHasValidVertexColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color1 != nullptr)
		*Color1 = std::move(Parms.Color1);

	if (Color2 != nullptr)
		*Color2 = std::move(Parms.Color2);

	if (Color3 != nullptr)
		*Color3 = std::move(Parms.Color3);

	if (bTriHasValidVertexColors != nullptr)
		*bTriHasValidVertexColors = Parms.bTriHasValidVertexColors;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        UV1                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        UV2                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        UV3                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHaveValidUVs                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, struct CoreUObject_Vector2D* UV1, struct CoreUObject_Vector2D* UV2, struct CoreUObject_Vector2D* UV3, bool* bHaveValidUVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleUVs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UV1 != nullptr)
		*UV1 = std::move(Parms.UV1);

	if (UV2 != nullptr)
		*UV2 = std::move(Parms.UV2);

	if (UV3 != nullptr)
		*UV3 = std::move(Parms.UV3);

	if (bHaveValidUVs != nullptr)
		*bHaveValidUVs = Parms.bHaveValidUVs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Vertex1                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Vertex2                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Vertex3                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle, struct CoreUObject_Vector* Vertex1, struct CoreUObject_Vector* Vertex2, struct CoreUObject_Vector* Vertex3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTrianglePositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	if (Vertex1 != nullptr)
		*Vertex1 = std::move(Parms.Vertex1);

	if (Vertex2 != nullptr)
		*Vertex2 = std::move(Parms.Vertex2);

	if (Vertex3 != nullptr)
		*Vertex3 = std::move(Parms.Vertex3);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriHasValidElements                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTriangleNormals                                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTriangleTangents                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTriangleBiTangents                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bTriHasValidElements, struct GeometryScriptingCore_GeometryScriptTriangle* Normals, struct GeometryScriptingCore_GeometryScriptTriangle* Tangents, struct GeometryScriptingCore_GeometryScriptTriangle* BiTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriHasValidElements != nullptr)
		*bTriHasValidElements = Parms.bTriHasValidElements;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);

	if (BiTangents != nullptr)
		*BiTangents = std::move(Parms.BiTangents);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Normal1                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Normal2                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Normal3                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriHasValidNormals                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, struct CoreUObject_Vector* Normal1, struct CoreUObject_Vector* Normal2, struct CoreUObject_Vector* Normal3, bool* bTriHasValidNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normal1 != nullptr)
		*Normal1 = std::move(Parms.Normal1);

	if (Normal2 != nullptr)
		*Normal2 = std::move(Parms.Normal2);

	if (Normal3 != nullptr)
		*Normal3 = std::move(Parms.Normal3);

	if (bTriHasValidNormals != nullptr)
		*bTriHasValidNormals = Parms.bTriHasValidNormals;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_IntVector       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_IntVector UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleFaceNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumUVSets");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmbiguousTopologyFound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool* bAmbiguousTopologyFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderLoops");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bAmbiguousTopologyFound != nullptr)
		*bAmbiguousTopologyFound = Parms.bAmbiguousTopologyFound;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderEdges");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumConnectedComponents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeAreaCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SurfaceArea                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          CenterOfMass                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeAreaCenter(class UDynamicMesh* TargetMesh, float* SurfaceArea, float* Volume, struct CoreUObject_Vector* CenterOfMass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshVolumeAreaCenter");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeAreaCenter_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SurfaceArea != nullptr)
		*SurfaceArea = Parms.SurfaceArea;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	if (CenterOfMass != nullptr)
		*CenterOfMass = std::move(Parms.CenterOfMass);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SurfaceArea                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float* SurfaceArea, float* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshVolumeArea");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SurfaceArea != nullptr)
		*SurfaceArea = Parms.SurfaceArea;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshInfoString");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshHasAttributeSet");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsDenseMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsClosedMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          BarycentricCoords                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     DefaultColor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriHasValidVertexColors                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     InterpolatedColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, const struct CoreUObject_LinearColor& DefaultColor, bool* bTriHasValidVertexColors, struct CoreUObject_LinearColor* InterpolatedColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleVertexColor");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.DefaultColor = DefaultColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriHasValidVertexColors != nullptr)
		*bTriHasValidVertexColors = Parms.bTriHasValidVertexColors;

	if (InterpolatedColor != nullptr)
		*InterpolatedColor = std::move(Parms.InterpolatedColor);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          BarycentricCoords                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriHasValidUVs                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        InterpolatedUV                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bTriHasValidUVs, struct CoreUObject_Vector2D* InterpolatedUV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleUV");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriHasValidUVs != nullptr)
		*bTriHasValidUVs = Parms.bTriHasValidUVs;

	if (InterpolatedUV != nullptr)
		*InterpolatedUV = std::move(Parms.InterpolatedUV);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          BarycentricCoords                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          InterpolatedPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bIsValidTriangle, struct CoreUObject_Vector* InterpolatedPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTrianglePosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	if (InterpolatedPosition != nullptr)
		*InterpolatedPosition = std::move(Parms.InterpolatedPosition);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          BarycentricCoords                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriHasValidElements                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          InterpolatedNormal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          InterpolatedTangent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          InterpolatedBiTangent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bTriHasValidElements, struct CoreUObject_Vector* InterpolatedNormal, struct CoreUObject_Vector* InterpolatedTangent, struct CoreUObject_Vector* InterpolatedBiTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriHasValidElements != nullptr)
		*bTriHasValidElements = Parms.bTriHasValidElements;

	if (InterpolatedNormal != nullptr)
		*InterpolatedNormal = std::move(Parms.InterpolatedNormal);

	if (InterpolatedTangent != nullptr)
		*InterpolatedTangent = std::move(Parms.InterpolatedTangent);

	if (InterpolatedBiTangent != nullptr)
		*InterpolatedBiTangent = std::move(Parms.InterpolatedBiTangent);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          BarycentricCoords                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriHasValidNormals                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          InterpolatedNormal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bTriHasValidNormals, struct CoreUObject_Vector* InterpolatedNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriHasValidNormals != nullptr)
		*bTriHasValidNormals = Parms.bTriHasValidNormals;

	if (InterpolatedNormal != nullptr)
		*InterpolatedNormal = std::move(Parms.InterpolatedNormal);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasPolygroups");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasMaterialIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListPositionList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bSkipGaps                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasVertexIDGaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptVectorList* PositionList, bool bSkipGaps, bool* bHasVertexIDGaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexPositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bSkipGaps = bSkipGaps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PositionList != nullptr)
		*PositionList = std::move(Parms.PositionList);

	if (bHasVertexIDGaps != nullptr)
		*bHasVertexIDGaps = Parms.bHasVertexIDGaps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListVertexIDList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bHasVertexIDGaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptIndexList* VertexIDList, bool* bHasVertexIDGaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexIDList != nullptr)
		*VertexIDList = std::move(Parms.VertexIDList);

	if (bHasVertexIDGaps != nullptr)
		*bHasVertexIDGaps = Parms.bHasVertexIDGaps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTriangleListTriangleList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bSkipGaps                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasTriangleIDGaps                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptTriangleList* TriangleList, bool bSkipGaps, bool* bHasTriangleIDGaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bSkipGaps = bSkipGaps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleList != nullptr)
		*TriangleList = std::move(Parms.TriangleList);

	if (bHasTriangleIDGaps != nullptr)
		*bHasTriangleIDGaps = Parms.bHasTriangleIDGaps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDList                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bHasTriangleIDGaps                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDList, bool* bHasTriangleIDGaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleIDList != nullptr)
		*TriangleIDList = std::move(Parms.TriangleIDList);

	if (bHasTriangleIDGaps != nullptr)
		*bHasTriangleIDGaps = Parms.bHasTriangleIDGaps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllSplitUVsAtVertex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ElementIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>ElementUVs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bHaveValidUVs                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 VertexID, TArray<int32>* ElementIDs, TArray<struct CoreUObject_Vector2D>* ElementUVs, bool* bHaveValidUVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllSplitUVsAtVertex");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllSplitUVsAtVertex_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementIDs != nullptr)
		*ElementIDs = std::move(Parms.ElementIDs);

	if (ElementUVs != nullptr)
		*ElementUVs = std::move(Parms.ElementUVs);

	if (bHaveValidUVs != nullptr)
		*bHaveValidUVs = Parms.bHaveValidUVs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Vertex1                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Vertex2                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Vertex3                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          BarycentricCoords                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle, const struct CoreUObject_Vector& Point, struct CoreUObject_Vector* Vertex1, struct CoreUObject_Vector* Vertex2, struct CoreUObject_Vector* Vertex3, struct CoreUObject_Vector* BarycentricCoords)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "ComputeTriangleBarycentricCoords");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	if (Vertex1 != nullptr)
		*Vertex1 = std::move(Parms.Vertex1);

	if (Vertex2 != nullptr)
		*Vertex2 = std::move(Parms.Vertex2);

	if (Vertex3 != nullptr)
		*Vertex3 = std::move(Parms.Vertex3);

	if (BarycentricCoords != nullptr)
		*BarycentricCoords = std::move(Parms.BarycentricCoords);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
// (None)

class UClass* UGeometryScriptLibrary_RemeshingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_RemeshingFunctions");

	return Clss;
}


// GeometryScriptLibrary_RemeshingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_RemeshingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_RemeshingFunctions* UGeometryScriptLibrary_RemeshingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_RemeshingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_RemeshingFunctions*>(UGeometryScriptLibrary_RemeshingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRemeshOptionsRemeshOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptUniformRemeshOptionsUniformOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptRemeshOptions& RemeshOptions, const struct GeometryScriptingCore_GeometryScriptUniformRemeshOptions& UniformOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RemeshingFunctions", "ApplyUniformRemesh");

	Params::UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.RemeshOptions = RemeshOptions;
	Parms.UniformOptions = UniformOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshRepairFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshRepairFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshRepairFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshRepairFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshRepairFunctions* UGeometryScriptLibrary_MeshRepairFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshRepairFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshRepairFunctions*>(UGeometryScriptLibrary_MeshRepairFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptWeldEdgesOptionsWeldOptions                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptWeldEdgesOptions& WeldOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "WeldMeshEdges");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.WeldOptions = WeldOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMeshBowties                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAttributeBowties                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "SplitMeshBowties");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bMeshBowties = bMeshBowties;
	Parms.bAttributeBowties = bAttributeBowties;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptResolveTJunctionOptionsResolveOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptResolveTJunctionOptions& ResolveOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "ResolveMeshTJunctions");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ResolveOptions = ResolveOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDegenerateTriangleOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RepairMeshDegenerateGeometry");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRemoveSmallComponentOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveSmallComponents");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRemoveHiddenTrianglesOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveHiddenTriangles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptFillHolesOptionsFillOptions                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              NumFilledHoles                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumFailedHoleFills                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptFillHolesOptions& FillOptions, int32* NumFilledHoles, int32* NumFailedHoleFills, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "FillAllMeshHoles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FillOptions = FillOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumFilledHoles != nullptr)
		*NumFilledHoles = Parms.NumFilledHoles;

	if (NumFailedHoleFills != nullptr)
		*NumFailedHoleFills = Parms.NumFailedHoleFills;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "CompactMesh");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSamplingFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSamplingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSamplingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSamplingFunctions* UGeometryScriptLibrary_MeshSamplingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSamplingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSamplingFunctions*>(UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListVertexWeights                                                    (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Transform>Samples                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<double>                     SampleRadii                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDs                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions& Options, const struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct GeometryScriptingCore_GeometryScriptScalarList& VertexWeights, TArray<struct CoreUObject_Transform>* Samples, TArray<double>* SampleRadii, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeVertexWeightedPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.NonUniformOptions = NonUniformOptions;
	Parms.VertexWeights = VertexWeights;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Samples != nullptr)
		*Samples = std::move(Parms.Samples);

	if (SampleRadii != nullptr)
		*SampleRadii = std::move(Parms.SampleRadii);

	if (TriangleIDs != nullptr)
		*TriangleIDs = std::move(Parms.TriangleIDs);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Transform>Samples                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDs                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions& Options, TArray<struct CoreUObject_Transform>* Samples, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputePointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Samples != nullptr)
		*Samples = std::move(Parms.Samples);

	if (TriangleIDs != nullptr)
		*TriangleIDs = std::move(Parms.TriangleIDs);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Transform>Samples                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<double>                     SampleRadii                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListTriangleIDs                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions& Options, const struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, TArray<struct CoreUObject_Transform>* Samples, TArray<double>* SampleRadii, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeNonUniformPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.NonUniformOptions = NonUniformOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Samples != nullptr)
		*Samples = std::move(Parms.Samples);

	if (SampleRadii != nullptr)
		*SampleRadii = std::move(Parms.SampleRadii);

	if (TriangleIDs != nullptr)
		*TriangleIDs = std::move(Parms.TriangleIDs);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSelectionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSelectionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSelectionFunctions* UGeometryScriptLibrary_MeshSelectionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSelectionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSelectionFunctions*>(UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          PlaneOrigin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          PlaneNormal                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvert                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinNumTrianglePoints                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Vector& PlaneOrigin, const struct CoreUObject_Vector& PlaneNormal, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsWithPlane");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PlaneOrigin = PlaneOrigin;
	Parms.PlaneNormal = PlaneNormal;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          SphereOrigin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SphereRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvert                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinNumTrianglePoints                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Vector& SphereOrigin, double SphereRadius, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInSphere");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SphereOrigin = SphereOrigin;
	Parms.SphereRadius = SphereRadius;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                SelectionMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       SelectionMeshTransform                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvert                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ShellDistance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             WindingThreshold                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinNumTrianglePoints                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Transform& SelectionMeshTransform, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInsideMesh");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SelectionMesh = SelectionMesh;
	Parms.SelectionMeshTransform = SelectionMeshTransform;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.ShellDistance = ShellDistance;
	Parms.WindingThreshold = WindingThreshold;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvert                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinNumTrianglePoints                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Box& Box, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInBox");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Box = Box;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Normal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             MaxAngleDeg                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvert                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinNumTrianglePoints                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Vector& Normal, double MaxAngleDeg, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsByNormalAngle");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Normal = Normal;
	Parms.MaxAngleDeg = MaxAngleDeg;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionNewSelection                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bOnlyToConnected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewSelection, bool bOnlyToConnected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "InvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.bOnlyToConnected = bOnlyToConnected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewSelection != nullptr)
		*NewSelection = std::move(Parms.NewSelection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSelected                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo(const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshSelectionType* SelectionType, int32* NumSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "GetMeshSelectionInfo");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params Parms{};

	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	if (NumSelected != nullptr)
		*NumSelected = Parms.NumSelected;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionNewSelection                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptTopologyConnectionTypeConnectionType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewSelection, enum class EGeometryScriptTopologyConnectionType ConnectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandMeshSelectionToConnected");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.ConnectionType = ConnectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewSelection != nullptr)
		*NewSelection = std::move(Parms.NewSelection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionNewSelection                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              Iterations                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bContract                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyExpandToFaceNeighbours                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandContractMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Iterations = Iterations;
	Parms.bContract = bContract;
	Parms.bOnlyExpandToFaceNeighbours = bOnlyExpandToFaceNeighbours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewSelection != nullptr)
		*NewSelection = std::move(Parms.NewSelection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               bDisable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection(const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, bool bDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "DebugPrintMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params Parms{};

	Parms.Selection = Selection;
	Parms.bDisable = bDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CreateSelectAllMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SelectionType = SelectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptIndexTypeResultListType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptIndexTypeConvertToType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType* ResultListType, enum class EGeometryScriptIndexType ConvertToType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexList");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.ConvertToType = ConvertToType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexList != nullptr)
		*IndexList = std::move(Parms.IndexList);

	if (ResultListType != nullptr)
		*ResultListType = Parms.ResultListType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// TArray<int32>                      IndexArray                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, TArray<int32>* IndexArray, enum class EGeometryScriptMeshSelectionType* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexArray");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexArray != nullptr)
		*IndexArray = std::move(Parms.IndexArray);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionFromSelection                                                    (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionToSelection                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeNewType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowPartialInclusion                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& FromSelection, struct GeometryScriptingCore_GeometryScriptMeshSelection* ToSelection, enum class EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromSelection = FromSelection;
	Parms.NewType = NewType;
	Parms.bAllowPartialInclusion = bAllowPartialInclusion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ToSelection != nullptr)
		*ToSelection = std::move(Parms.ToSelection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<int32>                        IndexSet                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32>& IndexSet, enum class EGeometryScriptMeshSelectionType SelectionType, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexSetToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexSet = IndexSet;
	Parms.SelectionType = SelectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptIndexListIndexList                                                        (Parm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, enum class EGeometryScriptMeshSelectionType SelectionType, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexListToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexList = IndexList;
	Parms.SelectionType = SelectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      IndexArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, TArray<int32>& IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexArrayToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexArray = IndexArray;
	Parms.SelectionType = SelectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelectionA                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelectionB                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionResultSelection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptCombineSelectionModeCombineMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections(const struct GeometryScriptingCore_GeometryScriptMeshSelection& SelectionA, const struct GeometryScriptingCore_GeometryScriptMeshSelection& SelectionB, struct GeometryScriptingCore_GeometryScriptMeshSelection* ResultSelection, enum class EGeometryScriptCombineSelectionMode CombineMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CombineMeshSelections");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params Parms{};

	Parms.SelectionA = SelectionA;
	Parms.SelectionB = SelectionB;
	Parms.CombineMode = CombineMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResultSelection != nullptr)
		*ResultSelection = std::move(Parms.ResultSelection);

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionQueryFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSelectionQueryFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSelectionQueryFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSelectionQueryFunctions* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSelectionQueryFunctions*>(UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             SelectionBounds                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct CoreUObject_Box* SelectionBounds, bool* bIsEmpty, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundingBox");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionBounds != nullptr)
		*SelectionBounds = std::move(Parms.SelectionBounds);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptIndexList>IndexLoops                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptPolyPath>PathLoops                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NumLoops                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundErrors                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, TArray<struct GeometryScriptingCore_GeometryScriptIndexList>* IndexLoops, TArray<struct GeometryScriptingCore_GeometryScriptPolyPath>* PathLoops, int32* NumLoops, bool* bFoundErrors, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundaryLoops");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexLoops != nullptr)
		*IndexLoops = std::move(Parms.IndexLoops);

	if (PathLoops != nullptr)
		*PathLoops = std::move(Parms.PathLoops);

	if (NumLoops != nullptr)
		*NumLoops = Parms.NumLoops;

	if (bFoundErrors != nullptr)
		*bFoundErrors = Parms.bFoundErrors;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSimplifyFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSimplifyFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSimplifyFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSimplifyFunctions* UGeometryScriptLibrary_MeshSimplifyFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSimplifyFunctions*>(UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexCount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32 VertexCount, const struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToVertexCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexCount = VertexCount;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32 TriangleCount, const struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTriangleCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleCount = TriangleCount;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, const struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTolerance");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Tolerance = Tolerance;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolygroupSimplifyOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGroupLayerGroupLayer                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPolygroupSimplifyOptions& Options, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPolygroupTopology");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.GroupLayer = GroupLayer;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPlanarSimplifyOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPlanar");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
// (None)

class UClass* UGeometryScriptLibrary_MeshSpatial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSpatial");

	return Clss;
}


// GeometryScriptLibrary_MeshSpatial GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSpatial
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSpatial* UGeometryScriptLibrary_MeshSpatial::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSpatial* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSpatial*>(UGeometryScriptLibrary_MeshSpatial::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.SelectMeshElementsInBoxWithBVH
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHQueryBVH                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             QueryBox                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSpatialQueryOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinNumTrianglePoints                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Box& QueryBox, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType, int32 MinNumTrianglePoints, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "SelectMeshElementsInBoxWithBVH");

	Params::UGeometryScriptLibrary_MeshSpatial_SelectMeshElementsInBoxWithBVH_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryBVH = QueryBVH;
	Parms.QueryBox = QueryBox;
	Parms.Options = Options;
	Parms.SelectionType = SelectionType;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHResetBVH                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_MeshSpatial::ResetBVH(struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& ResetBVH)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "ResetBVH");

	Params::UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params Parms{};

	Parms.ResetBVH = ResetBVH;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHUpdateBVH                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOnlyIfInvalid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "RebuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UpdateBVH = UpdateBVH;
	Parms.bOnlyIfInvalid = bOnlyIfInvalid;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHQueryBVH                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          QueryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSpatialQueryOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsInside                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptContainmentOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Vector& QueryPoint, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, bool* bIsInside, enum class EGeometryScriptContainmentOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsPointInsideMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryBVH = QueryBVH;
	Parms.QueryPoint = QueryPoint;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsInside != nullptr)
		*bIsInside = Parms.bIsInside;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHTestBVH                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsValid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& TestBVH, bool* bIsValid, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsBVHValidForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TestBVH = TestBVH;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHQueryBVH                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RayOrigin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RayDirection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSpatialQueryOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRayHitResultHitResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Vector& RayOrigin, const struct CoreUObject_Vector& RayDirection, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, struct GeometryScriptingCore_GeometryScriptRayHitResult* HitResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestRayIntersectionWithMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryBVH = QueryBVH;
	Parms.RayOrigin = RayOrigin;
	Parms.RayDirection = RayDirection;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HitResult != nullptr)
		*HitResult = std::move(Parms.HitResult);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHQueryBVH                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          QueryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSpatialQueryOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptTrianglePointNearestResult                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Vector& QueryPoint, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, struct GeometryScriptingCore_GeometryScriptTrianglePoint* NearestResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestPointOnMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryBVH = QueryBVH;
	Parms.QueryPoint = QueryPoint;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NearestResult != nullptr)
		*NearestResult = std::move(Parms.NearestResult);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptDynamicMeshBVHOutputBVH                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH* OutputBVH, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "BuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutputBVH != nullptr)
		*OutputBVH = std::move(Parms.OutputBVH);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSubdivideFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSubdivideFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSubdivideFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSubdivideFunctions* UGeometryScriptLibrary_MeshSubdivideFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSubdivideFunctions*>(UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TessellationLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32 TessellationLevel, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyUniformTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TessellationLevel = TessellationLevel;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSelectiveTessellateOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              TessellationLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectiveTessellatePatternTypePatternType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptSelectiveTessellateOptions& Options, int32 TessellationLevel, enum class ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplySelectiveTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.TessellationLevel = TessellationLevel;
	Parms.PatternType = PatternType;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPNTessellateOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              TessellationLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPNTessellateOptions& Options, int32 TessellationLevel, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyPNTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.TessellationLevel = TessellationLevel;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshTransformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshTransformFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshTransformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshTransformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshTransformFunctions* UGeometryScriptLibrary_MeshTransformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshTransformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshTransformFunctions*>(UGeometryScriptLibrary_MeshTransformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          PivotLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TranslatePivotToLocation(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& PivotLocation, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslatePivotToLocation");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PivotLocation = PivotLocation;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Vector& Translation, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Translation = Translation;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& Translation, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Translation = Translation;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Transform& Transform, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Transform = Transform;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFixOrientationForNegativeScale                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Transform = Transform;
	Parms.bFixOrientationForNegativeScale = bFixOrientationForNegativeScale;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ScaleOrigin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Vector& Scale, const struct CoreUObject_Vector& ScaleOrigin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Scale = Scale;
	Parms.ScaleOrigin = ScaleOrigin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ScaleOrigin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFixOrientationForNegativeScale                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& Scale, const struct CoreUObject_Vector& ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Scale = Scale;
	Parms.ScaleOrigin = ScaleOrigin;
	Parms.bFixOrientationForNegativeScale = bFixOrientationForNegativeScale;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RotationOrigin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& RotationOrigin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Rotation = Rotation;
	Parms.RotationOrigin = RotationOrigin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RotationOrigin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::RotateMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& RotationOrigin, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Rotation = Rotation;
	Parms.RotationOrigin = RotationOrigin;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshUVFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshUVFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshUVFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshUVFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshUVFunctions* UGeometryScriptLibrary_MeshUVFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshUVFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshUVFunctions*>(UGeometryScriptLibrary_MeshUVFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Vector2D& Translation, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "TranslateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Translation = Translation;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumUVSets                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets(class UDynamicMesh* TargetMesh, int32 NumUVSets, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetNumUVSets");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NumUVSets = NumUVSets;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       PlaneTransform                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Transform& PlaneTransform, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromPlanarProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.PlaneTransform = PlaneTransform;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       CylinderTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// float                              SplitAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Transform& CylinderTransform, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, float SplitAngle, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromCylinderProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.CylinderTransform = CylinderTransform;
	Parms.Selection = Selection;
	Parms.SplitAngle = SplitAngle;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       BoxTransform                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              MinIslandTriCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Transform& BoxTransform, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32 MinIslandTriCount, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromBoxProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.BoxTransform = BoxTransform;
	Parms.Selection = Selection;
	Parms.MinIslandTriCount = MinIslandTriCount;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TriangleID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptUVTriangleUVs                                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsValidTriangle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeferChangeNotifications                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct GeometryScriptingCore_GeometryScriptUVTriangle& UVs, bool* bIsValidTriangle, bool bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshTriangleUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.TriangleID = TriangleID;
	Parms.UVs = UVs;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ScaleOrigin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Vector2D& Scale, const struct CoreUObject_Vector2D& ScaleOrigin, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "ScaleMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Scale = Scale;
	Parms.ScaleOrigin = ScaleOrigin;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationAngle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        RotationOrigin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, float RotationAngle, const struct CoreUObject_Vector2D& RotationOrigin, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RotateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.RotationAngle = RotationAngle;
	Parms.RotationOrigin = RotationOrigin;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRepackUVsOptionsRepackOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptRepackUVsOptions& RepackOptions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RepackMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.RepackOptions = RepackOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptRecomputeUVsOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptRecomputeUVsOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RecomputeMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// double                             MeshArea                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             UVArea                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             MeshBounds                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Box2D           UVBounds                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsValidUVSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundUnsetUVs                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyIncludeValidUVTris                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, double* MeshArea, double* UVArea, struct CoreUObject_Box* MeshBounds, struct CoreUObject_Box2D* UVBounds, bool* bIsValidUVSet, bool* bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshUVSizeInfo");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Selection = Selection;
	Parms.bOnlyIncludeValidUVTris = bOnlyIncludeValidUVTris;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshArea != nullptr)
		*MeshArea = Parms.MeshArea;

	if (UVArea != nullptr)
		*UVArea = Parms.UVArea;

	if (MeshBounds != nullptr)
		*MeshBounds = std::move(Parms.MeshBounds);

	if (UVBounds != nullptr)
		*UVBounds = std::move(Parms.UVBounds);

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	if (bFoundUnsetUVs != nullptr)
		*bFoundUnsetUVs = Parms.bFoundUnsetUVs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bIsValidUVSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasVertexIDGaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasSplitUVs                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, struct GeometryScriptingCore_GeometryScriptUVList* UVList, bool* bIsValidUVSet, bool* bHasVertexIDGaps, bool* bHasSplitUVs, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshPerVertexUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UVList != nullptr)
		*UVList = std::move(Parms.UVList);

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	if (bHasVertexIDGaps != nullptr)
		*bHasVertexIDGaps = Parms.bHasVertexIDGaps;

	if (bHasSplitUVs != nullptr)
		*bHasSplitUVs = Parms.bHasSplitUVs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FromUVSet                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ToUVSet                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet(class UDynamicMesh* TargetMesh, int32 FromUVSet, int32 ToUVSet, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyUVSet");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromUVSet = FromUVSet;
	Parms.ToUVSet = ToUVSet;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToUVMesh                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToUVMeshOut                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvalidTopology                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidUVSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32 UvSetIndex, class UDynamicMesh*& CopyToUVMesh, class UDynamicMesh** CopyToUVMeshOut, bool* bInvalidTopology, bool* bIsValidUVSet, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshUVLayerToMesh");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params Parms{};

	Parms.CopyFromMesh = CopyFromMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.CopyToUVMesh = CopyToUVMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyToUVMeshOut != nullptr)
		*CopyToUVMeshOut = Parms.CopyToUVMeshOut;

	if (bInvalidTopology != nullptr)
		*bInvalidTopology = Parms.bInvalidTopology;

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromUVMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ToUVSetIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMesh                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                CopyToMeshOut                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundTopologyErrors                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidUVSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyUVPositions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, bool* bFoundTopologyErrors, bool* bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshToMeshUVLayer");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params Parms{};

	Parms.CopyFromUVMesh = CopyFromUVMesh;
	Parms.ToUVSetIndex = ToUVSetIndex;
	Parms.CopyToMesh = CopyToMesh;
	Parms.bOnlyUVPositions = bOnlyUVPositions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyToMeshOut != nullptr)
		*CopyToMeshOut = Parms.CopyToMeshOut;

	if (bFoundTopologyErrors != nullptr)
		*bFoundTopologyErrors = Parms.bFoundTopologyErrors;

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ComputeMeshLocalUVParam
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          CenterPoint                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CenterPointTriangleID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      VertexIDs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>VertexUVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// double                             Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseInterpolatedNormal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          TangentYDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             UVRotationDeg                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& CenterPoint, int32 CenterPointTriangleID, TArray<int32>* VertexIDs, TArray<struct CoreUObject_Vector2D>* VertexUVs, double Radius, bool bUseInterpolatedNormal, const struct CoreUObject_Vector& TangentYDirection, double UVRotationDeg, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "ComputeMeshLocalUVParam");

	Params::UGeometryScriptLibrary_MeshUVFunctions_ComputeMeshLocalUVParam_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CenterPoint = CenterPoint;
	Parms.CenterPointTriangleID = CenterPointTriangleID;
	Parms.Radius = Radius;
	Parms.bUseInterpolatedNormal = bUseInterpolatedNormal;
	Parms.TangentYDirection = TangentYDirection;
	Parms.UVRotationDeg = UVRotationDeg;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexIDs != nullptr)
		*VertexIDs = std::move(Parms.VertexIDs);

	if (VertexUVs != nullptr)
		*VertexUVs = std::move(Parms.VertexUVs);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptXAtlasOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGenerateXAtlasMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UvSetIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPatchBuilderOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGeneratePatchBuilderMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVertexColorFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshVertexColorFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshVertexColorFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshVertexColorFunctions* UGeometryScriptLibrary_MeshVertexColorFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshVertexColorFunctions*>(UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorFlagsFlags                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bCreateColorSeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_LinearColor& Color, const struct GeometryScriptingCore_GeometryScriptColorFlags& Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshSelectionVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Color = Color;
	Parms.Flags = Flags;
	Parms.bCreateColorSeam = bCreateColorSeam;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorListVertexColorList                                                  (Parm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptColorList& VertexColorList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexColorList = VertexColorList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorFlagsFlags                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bClearExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, const struct CoreUObject_LinearColor& Color, const struct GeometryScriptingCore_GeometryScriptColorFlags& Flags, bool bClearExisting, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshConstantVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Color = Color;
	Parms.Flags = Flags;
	Parms.bClearExisting = bClearExisting;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bIsValidColorSet                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasVertexIDGaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBlendSplitVertexValues                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptColorList* ColorList, bool* bIsValidColorSet, bool* bHasVertexIDGaps, bool bBlendSplitVertexValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "GetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bBlendSplitVertexValues = bBlendSplitVertexValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorList != nullptr)
		*ColorList = std::move(Parms.ColorList);

	if (bIsValidColorSet != nullptr)
		*bIsValidColorSet = Parms.bIsValidColorSet;

	if (bHasVertexIDGaps != nullptr)
		*bHasVertexIDGaps = Parms.bHasVertexIDGaps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsSRGBToLinear");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsLinearToSRGB");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.BlurMeshVertexColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMeshSelectionSelection                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              NumIterations                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptBlurColorModeBlurMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptBlurMeshVertexColorsOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::BlurMeshVertexColors(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32 NumIterations, double Strength, enum class EGeometryScriptBlurColorMode BlurMode, const struct GeometryScriptingCore_GeometryScriptBlurMeshVertexColorsOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "BlurMeshVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_BlurMeshVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NumIterations = NumIterations;
	Parms.Strength = Strength;
	Parms.BlurMode = BlurMode;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVoxelFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshVoxelFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshVoxelFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshVoxelFunctions* UGeometryScriptLibrary_MeshVoxelFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshVoxelFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshVoxelFunctions*>(UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSolidifyOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshSolidify");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptMorphologyOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshMorphology");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions
// (None)

class UClass* UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_SimplePolygonFunctions");

	return Clss;
}


// GeometryScriptLibrary_SimplePolygonFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_SimplePolygonFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_SimplePolygonFunctions* UGeometryScriptLibrary_SimplePolygonFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_SimplePolygonFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_SimplePolygonFunctions*>(UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.SetPolygonVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              VertexIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPolygonIsEmpty                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_SimplePolygonFunctions::SetPolygonVertex(struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, int32 VertexIndex, const struct CoreUObject_Vector2D& Position, bool* bPolygonIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "SetPolygonVertex");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Params Parms{};

	Parms.Polygon = Polygon;
	Parms.VertexIndex = VertexIndex;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPolygonIsEmpty != nullptr)
		*bPolygonIsEmpty = Parms.bPolygonIsEmpty;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertexCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertexCount(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "GetPolygonVertexCount");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Params Parms{};

	Parms.Polygon = Polygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// int32                              VertexIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPolygonIsEmpty                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertex(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, int32 VertexIndex, bool* bPolygonIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "GetPolygonVertex");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Params Parms{};

	Parms.Polygon = Polygon;
	Parms.VertexIndex = VertexIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPolygonIsEmpty != nullptr)
		*bPolygonIsEmpty = Parms.bPolygonIsEmpty;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonTangent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// int32                              VertexIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPolygonIsEmpty                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonTangent(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, int32 VertexIndex, bool* bPolygonIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "GetPolygonTangent");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Params Parms{};

	Parms.Polygon = Polygon;
	Parms.VertexIndex = VertexIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPolygonIsEmpty != nullptr)
		*bPolygonIsEmpty = Parms.bPolygonIsEmpty;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonBounds
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Box2D           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box2D UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonBounds(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "GetPolygonBounds");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Params Parms{};

	Parms.Polygon = Polygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArea
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArea(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "GetPolygonArea");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Params Parms{};

	Parms.Polygon = Polygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArcLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArcLength(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "GetPolygonArcLength");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Params Parms{};

	Parms.Polygon = Polygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.ConvertSplineToPolygon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSplineSamplingOptionsSamplingOptions                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EGeometryScriptAxis     DropAxis                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_SimplePolygonFunctions::ConvertSplineToPolygon(class USplineComponent* Spline, struct GeometryScriptingCore_GeometryScriptSimplePolygon* Polygon, const struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions& SamplingOptions, enum class EGeometryScriptAxis DropAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "ConvertSplineToPolygon");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Params Parms{};

	Parms.Spline = Spline;
	Parms.SamplingOptions = SamplingOptions;
	Parms.DropAxis = DropAxis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Polygon != nullptr)
		*Polygon = std::move(Parms.Polygon);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArrayOfVector2D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct CoreUObject_Vector2D> UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArrayOfVector2D(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "Conv_GeometryScriptSimplePolygonToArrayOfVector2D");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Params Parms{};

	Parms.Polygon = Polygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct CoreUObject_Vector> UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArray(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "Conv_GeometryScriptSimplePolygonToArray");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Params Parms{};

	Parms.Polygon = Polygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayToGeometryScriptSimplePolygon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct CoreUObject_Vector>  PathVertices                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplePolygonReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptSimplePolygon UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayToGeometryScriptSimplePolygon(TArray<struct CoreUObject_Vector>& PathVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "Conv_ArrayToGeometryScriptSimplePolygon");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Params Parms{};

	Parms.PathVertices = PathVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayOfVector2DToGeometryScriptSimplePolygon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct CoreUObject_Vector2D>PathVertices                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplePolygonReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptSimplePolygon UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(TArray<struct CoreUObject_Vector2D>& PathVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "Conv_ArrayOfVector2DToGeometryScriptSimplePolygon");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Params Parms{};

	Parms.PathVertices = PathVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.AddPolygonVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonPolygon                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_SimplePolygonFunctions::AddPolygonVertex(struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, const struct CoreUObject_Vector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SimplePolygonFunctions", "AddPolygonVertex");

	Params::UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Params Parms{};

	Parms.Polygon = Polygon;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions
// (None)

class UClass* UGeometryScriptLibrary_PolygonListFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_PolygonListFunctions");

	return Clss;
}


// GeometryScriptLibrary_PolygonListFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_PolygonListFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_PolygonListFunctions* UGeometryScriptLibrary_PolygonListFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_PolygonListFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_PolygonListFunctions*>(UGeometryScriptLibrary_PolygonListFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsUnion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bCopyInputOnFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsUnion(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool bCopyInputOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsUnion");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.bCopyInputOnFailure = bCopyInputOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffsets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptionsOffsetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             FirstOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SecondOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOperationSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCopyInputOnFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffsets(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double FirstOffset, double SecondOffset, bool* bOperationSuccess, bool bCopyInputOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsOffsets");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.OffsetOptions = OffsetOptions;
	Parms.FirstOffset = FirstOffset;
	Parms.SecondOffset = SecondOffset;
	Parms.bCopyInputOnFailure = bCopyInputOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOperationSuccess != nullptr)
		*bOperationSuccess = Parms.bOperationSuccess;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptionsOffsetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOperationSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCopyInputOnFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffset(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsOffset");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.OffsetOptions = OffsetOptions;
	Parms.Offset = Offset;
	Parms.bCopyInputOnFailure = bCopyInputOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOperationSuccess != nullptr)
		*bOperationSuccess = Parms.bOperationSuccess;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyOpen
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptionsOffsetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOperationSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCopyInputOnFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyOpen(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsMorphologyOpen");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.OffsetOptions = OffsetOptions;
	Parms.Offset = Offset;
	Parms.bCopyInputOnFailure = bCopyInputOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOperationSuccess != nullptr)
		*bOperationSuccess = Parms.bOperationSuccess;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyClose
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptionsOffsetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOperationSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCopyInputOnFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyClose(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsMorphologyClose");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.OffsetOptions = OffsetOptions;
	Parms.Offset = Offset;
	Parms.bCopyInputOnFailure = bCopyInputOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOperationSuccess != nullptr)
		*bOperationSuccess = Parms.bOperationSuccess;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsIntersection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonsToIntersect                                              (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsIntersection(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToIntersect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsIntersection");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonsToIntersect = PolygonsToIntersect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsExclusiveOr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonsToExclusiveOr                                            (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsExclusiveOr(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToExclusiveOr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsExclusiveOr");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonsToExclusiveOr = PolygonsToExclusiveOr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsDifference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonsToSubtract                                               (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsDifference(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToSubtract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "PolygonsDifference");

	Params::UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonsToSubtract = PolygonsToSubtract;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetSimplePolygon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bValidIndices                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplePolygonReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptSimplePolygon UGeometryScriptLibrary_PolygonListFunctions::GetSimplePolygon(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndices, int32 PolygonIndex, int32 HoleIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetSimplePolygon");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonIndex = PolygonIndex;
	Parms.HoleIndex = HoleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValidIndices != nullptr)
		*bValidIndices = Parms.bValidIndices;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>OutVertices                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bValidIndices                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertices(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, TArray<struct CoreUObject_Vector2D>* OutVertices, bool* bValidIndices, int32 PolygonIndex, int32 HoleIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonVertices");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonIndex = PolygonIndex;
	Parms.HoleIndex = HoleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVertices != nullptr)
		*OutVertices = std::move(Parms.OutVertices);

	if (bValidIndices != nullptr)
		*bValidIndices = Parms.bValidIndices;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertexCount
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bValidIndices                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertexCount(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndices, int32 PolygonIndex, int32 HoleIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonVertexCount");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonIndex = PolygonIndex;
	Parms.HoleIndex = HoleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValidIndices != nullptr)
		*bValidIndices = Parms.bValidIndices;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bIsValidVertex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertex(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bIsValidVertex, int32 VertexIndex, int32 PolygonIndex, int32 HoleIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonVertex");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.VertexIndex = VertexIndex;
	Parms.PolygonIndex = PolygonIndex;
	Parms.HoleIndex = HoleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidVertex != nullptr)
		*bIsValidVertex = Parms.bIsValidVertex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListBounds
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Box2D           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box2D UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListBounds(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonListBounds");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Params Parms{};

	Parms.PolygonList = PolygonList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListArea
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListArea(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonListArea");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Params Parms{};

	Parms.PolygonList = PolygonList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonHoleCount
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bValidIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_PolygonListFunctions::GetPolygonHoleCount(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndex, int32 PolygonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonHoleCount");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonIndex = PolygonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValidIndex != nullptr)
		*bValidIndex = Parms.bValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_PolygonListFunctions::GetPolygonCount(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonCount");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Params Parms{};

	Parms.PolygonList = PolygonList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonBounds
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bValidIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box2D           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box2D UGeometryScriptLibrary_PolygonListFunctions::GetPolygonBounds(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndex, int32 PolygonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonBounds");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonIndex = PolygonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValidIndex != nullptr)
		*bValidIndex = Parms.bValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonArea
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bValidIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_PolygonListFunctions::GetPolygonArea(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndex, int32 PolygonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "GetPolygonArea");

	Params::UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonIndex = PolygonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValidIndex != nullptr)
		*bValidIndex = Parms.bValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromPathOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct CoreUObject_Vector2D>Path                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptionsOffsetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOperationSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCopyInputOnFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromPathOffset(const TArray<struct CoreUObject_Vector2D>& Path, const struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "CreatePolygonsFromPathOffset");

	Params::UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Params Parms{};

	Parms.Path = Path;
	Parms.OffsetOptions = OffsetOptions;
	Parms.Offset = Offset;
	Parms.bCopyInputOnFailure = bCopyInputOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOperationSuccess != nullptr)
		*bOperationSuccess = Parms.bOperationSuccess;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromOpenPolyPathsOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct GeometryScriptingCore_GeometryScriptPolyPath>PolyPaths                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptionsOffsetOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOperationSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCopyInputOnFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromOpenPolyPathsOffset(const TArray<struct GeometryScriptingCore_GeometryScriptPolyPath>& PolyPaths, const struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "CreatePolygonsFromOpenPolyPathsOffset");

	Params::UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Params Parms{};

	Parms.PolyPaths = PolyPaths;
	Parms.OffsetOptions = OffsetOptions;
	Parms.Offset = Offset;
	Parms.bCopyInputOnFailure = bCopyInputOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOperationSuccess != nullptr)
		*bOperationSuccess = Parms.bOperationSuccess;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSinglePolygon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptSimplePolygonOuterPolygon                                                     (Parm, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>HolePolygons                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bFixHoleOrientations                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSinglePolygon(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& OuterPolygon, TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "CreatePolygonListFromSinglePolygon");

	Params::UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Params Parms{};

	Parms.OuterPolygon = OuterPolygon;
	Parms.HolePolygons = HolePolygons;
	Parms.bFixHoleOrientations = bFixHoleOrientations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSimplePolygons
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>OuterPolygons                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSimplePolygons(TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>& OuterPolygons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "CreatePolygonListFromSimplePolygons");

	Params::UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Params Parms{};

	Parms.OuterPolygons = OuterPolygons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AppendPolygonList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonsToAppend                                                 (Parm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolygonListFunctions::AppendPolygonList(struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToAppend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "AppendPolygonList");

	Params::UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.PolygonsToAppend = PolygonsToAppend;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AddPolygonToList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptGeneralPolygonListPolygonList                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSimplePolygonOuterPolygon                                                     (Parm, NativeAccessSpecifierPublic)
// TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>HolePolygons                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bFixHoleOrientations                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_PolygonListFunctions::AddPolygonToList(struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptSimplePolygon& OuterPolygon, TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolygonListFunctions", "AddPolygonToList");

	Params::UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Params Parms{};

	Parms.PolygonList = PolygonList;
	Parms.OuterPolygon = OuterPolygon;
	Parms.HolePolygons = HolePolygons;
	Parms.bFixHoleOrientations = bFixHoleOrientations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
// (None)

class UClass* UGeometryScriptLibrary_PolyPathFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_PolyPathFunctions");

	return Clss;
}


// GeometryScriptLibrary_PolyPathFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_PolyPathFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_PolyPathFunctions* UGeometryScriptLibrary_PolyPathFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_PolyPathFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_PolyPathFunctions*>(UGeometryScriptLibrary_PolyPathFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Transform>Frames                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<double>                     FrameTimes                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSplineSamplingOptionsSamplingOptions                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       RelativeTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms(class USplineComponent* Spline, TArray<struct CoreUObject_Transform>* Frames, TArray<double>* FrameTimes, const struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions& SamplingOptions, const struct CoreUObject_Transform& RelativeTransform, bool bIncludeScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "SampleSplineToTransforms");

	Params::UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params Parms{};

	Parms.Spline = Spline;
	Parms.SamplingOptions = SamplingOptions;
	Parms.RelativeTransform = RelativeTransform;
	Parms.bIncludeScale = bIncludeScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Frames != nullptr)
		*Frames = std::move(Parms.Frames);

	if (FrameTimes != nullptr)
		*FrameTimes = std::move(Parms.FrameTimes);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, int32 Index, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathVertex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, int32 Index, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathTangent");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathNumVertices");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathLastIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathArcLength");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, const struct CoreUObject_Vector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetNearestVertexIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// enum class EGeometryScriptAxis     DropAxis                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "FlattenTo2DOnAxis");

	Params::UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.DropAxis = DropAxis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPoints                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D(const struct CoreUObject_Transform& Transform, float Radius, int32 NumPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params Parms{};

	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector2D        Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPoints                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D(const struct CoreUObject_Vector2D& Center, float Radius, int32 NumPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params Parms{};

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPoints                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAngle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D(const struct CoreUObject_Transform& Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params Parms{};

	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;
	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector2D        Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPoints                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAngle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D(const struct CoreUObject_Vector2D& Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params Parms{};

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;
	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSplineSamplingOptionsSamplingOptions                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(class USplineComponent* Spline, struct GeometryScriptingCore_GeometryScriptPolyPath* PolyPath, const struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions& SamplingOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertSplineToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params Parms{};

	Parms.Spline = Spline;
	Parms.SamplingOptions = SamplingOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolyPath != nullptr)
		*PolyPath = std::move(Parms.PolyPath);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>VertexArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArrayOfVector2D(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, TArray<struct CoreUObject_Vector2D>* VertexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexArray != nullptr)
		*VertexArray = std::move(Parms.VertexArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector>  VertexArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArray(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, TArray<struct CoreUObject_Vector>* VertexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexArray != nullptr)
		*VertexArray = std::move(Parms.VertexArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct CoreUObject_Vector>  VertexArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayToPolyPath(TArray<struct CoreUObject_Vector>& VertexArray, struct GeometryScriptingCore_GeometryScriptPolyPath* PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params Parms{};

	Parms.VertexArray = VertexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolyPath != nullptr)
		*PolyPath = std::move(Parms.PolyPath);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct CoreUObject_Vector2D>VertexArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayOfVector2DToPolyPath(TArray<struct CoreUObject_Vector2D>& VertexArray, struct GeometryScriptingCore_GeometryScriptPolyPath* PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayOfVector2DToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params Parms{};

	Parms.VertexArray = VertexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolyPath != nullptr)
		*PolyPath = std::move(Parms.PolyPath);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector2D>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct CoreUObject_Vector2D> UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptPolyPathPolyPath                                                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct CoreUObject_Vector>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct CoreUObject_Vector> UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct CoreUObject_Vector>  PathVertices                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath(TArray<struct CoreUObject_Vector>& PathVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params Parms{};

	Parms.PathVertices = PathVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct CoreUObject_Vector2D>PathVertices                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptPolyPathReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<struct CoreUObject_Vector2D>& PathVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayOfVector2DToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params Parms{};

	Parms.PathVertices = PathVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
// (None)

class UClass* UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_SceneUtilityFunctions");

	return Clss;
}


// GeometryScriptLibrary_SceneUtilityFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_SceneUtilityFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_SceneUtilityFunctions* UGeometryScriptLibrary_SceneUtilityFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_SceneUtilityFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_SceneUtilityFunctions*>(UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMaterialInterface*>  MaterialList                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList(class UPrimitiveComponent* Component, TArray<class UMaterialInterface*>& MaterialList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "SetComponentMaterialList");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params Parms{};

	Parms.Component = Component;
	Parms.MaterialList = MaterialList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshPool*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMeshPool* UGeometryScriptLibrary_SceneUtilityFunctions::CreateDynamicMeshPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CreateDynamicMeshPool");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ToDynamicMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptCopyMeshFromComponentOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bTransformToWorld                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       LocalToWorld                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, const struct GeometryScriptingCore_GeometryScriptCopyMeshFromComponentOptions& Options, bool bTransformToWorld, struct CoreUObject_Transform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyMeshFromComponent");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params Parms{};

	Parms.Component = Component;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.Options = Options;
	Parms.bTransformToWorld = bTransformToWorld;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalToWorld != nullptr)
		*LocalToWorld = std::move(Parms.LocalToWorld);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     FromObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ToDynamicMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTransformToWorld                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       LocalToWorld                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseComplexCollision                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SphereResolution                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMesh*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, struct CoreUObject_Transform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyCollisionMeshesFromObject");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params Parms{};

	Parms.FromObject = FromObject;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.bTransformToWorld = bTransformToWorld;
	Parms.bUseComplexCollision = bUseComplexCollision;
	Parms.SphereResolution = SphereResolution;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalToWorld != nullptr)
		*LocalToWorld = std::move(Parms.LocalToWorld);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
// (None)

class UClass* UGeometryScriptLibrary_TransformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_TransformFunctions");

	return Clss;
}


// GeometryScriptLibrary_TransformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_TransformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_TransformFunctions* UGeometryScriptLibrary_TransformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_TransformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_TransformFunctions*>(UGeometryScriptLibrary_TransformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ZAxis                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Transform UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis(const struct CoreUObject_Vector& Location, const struct CoreUObject_Vector& ZAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromZAxis");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params Parms{};

	Parms.Location = Location;
	Parms.ZAxis = ZAxis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ZAxis                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          TangentAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTangentIsX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Transform UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes(const struct CoreUObject_Vector& Location, const struct CoreUObject_Vector& ZAxis, const struct CoreUObject_Vector& TangentAxis, bool bTangentIsX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromAxes");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params Parms{};

	Parms.Location = Location;
	Parms.ZAxis = ZAxis;
	Parms.TangentAxis = TangentAxis;
	Parms.bTangentIsX = bTangentIsX;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptAxis     Axis                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector(const struct CoreUObject_Transform& Transform, enum class EGeometryScriptAxis Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisVector");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params Parms{};

	Parms.Transform = Transform;
	Parms.Axis = Axis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptAxis     Axis                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Ray             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Ray UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay(const struct CoreUObject_Transform& Transform, enum class EGeometryScriptAxis Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisRay");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params Parms{};

	Parms.Transform = Transform;
	Parms.Axis = Axis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryScriptAxis     Axis                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Plane           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Plane UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane(const struct CoreUObject_Transform& Transform, enum class EGeometryScriptAxis Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisPlane");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params Parms{};

	Parms.Transform = Transform;
	Parms.Axis = Axis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
// (None)

class UClass* UGeometryScriptLibrary_RayFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_RayFunctions");

	return Clss;
}


// GeometryScriptLibrary_RayFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_RayFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_RayFunctions* UGeometryScriptLibrary_RayFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_RayFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_RayFunctions*>(UGeometryScriptLibrary_RayFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Ray             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Ray UGeometryScriptLibrary_RayFunctions::MakeRayFromPoints(const struct CoreUObject_Vector& A, const struct CoreUObject_Vector& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPoints");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDirectionIsNormalized                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Ray             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Ray UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection(const struct CoreUObject_Vector& Origin, const struct CoreUObject_Vector& Direction, bool bDirectionIsNormalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPointDirection");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params Parms{};

	Parms.Origin = Origin;
	Parms.Direction = Direction;
	Parms.bDirectionIsNormalized = bDirectionIsNormalized;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvert                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Ray             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Ray UGeometryScriptLibrary_RayFunctions::GetTransformedRay(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Transform& Transform, bool bInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetTransformedRay");

	Params::UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params Parms{};

	Parms.Ray = Ray;
	Parms.Transform = Transform;
	Parms.bInvert = bInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// double                             StartDistance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             EndDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          StartPoint                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          EndPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_RayFunctions::GetRayStartEnd(const struct CoreUObject_Ray& Ray, double StartDistance, double EndDistance, struct CoreUObject_Vector* StartPoint, struct CoreUObject_Vector* EndPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayStartEnd");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params Parms{};

	Parms.Ray = Ray;
	Parms.StartDistance = StartDistance;
	Parms.EndDistance = EndDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StartPoint != nullptr)
		*StartPoint = std::move(Parms.StartPoint);

	if (EndPoint != nullptr)
		*EndPoint = std::move(Parms.EndPoint);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          SphereCenter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SphereRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Distance1                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Distance2                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& SphereCenter, double SphereRadius, double* Distance1, double* Distance2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySphereIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.SphereCenter = SphereCenter;
	Parms.SphereRadius = SphereRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Distance1 != nullptr)
		*Distance1 = Parms.Distance1;

	if (Distance2 != nullptr)
		*Distance2 = Parms.Distance2;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          SegStartPoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          SegEndPoint                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RayParameter                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RayPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          SegPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& SegStartPoint, const struct CoreUObject_Vector& SegEndPoint, double* RayParameter, struct CoreUObject_Vector* RayPoint, struct CoreUObject_Vector* SegPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySegmentClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.SegStartPoint = SegStartPoint;
	Parms.SegEndPoint = SegEndPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RayParameter != nullptr)
		*RayParameter = Parms.RayParameter;

	if (RayPoint != nullptr)
		*RayPoint = std::move(Parms.RayPoint);

	if (SegPoint != nullptr)
		*SegPoint = std::move(Parms.SegPoint);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_RayFunctions::GetRayPointDistance(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPointDistance");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params Parms{};

	Parms.Ray = Ray;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// double                             Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_RayFunctions::GetRayPoint(const struct CoreUObject_Ray& Ray, double Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Plane           Plane                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             HitDistance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Plane& Plane, double* HitDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPlaneIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.Plane = Plane;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HitDistance != nullptr)
		*HitDistance = Parms.HitDistance;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_RayFunctions::GetRayParameter(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayParameter");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params Parms{};

	Parms.Ray = Ray;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          LineOrigin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          LineDirection                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RayParameter                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RayPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             LineParameter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          LinePoint                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& LineOrigin, const struct CoreUObject_Vector& LineDirection, double* RayParameter, struct CoreUObject_Vector* RayPoint, double* LineParameter, struct CoreUObject_Vector* LinePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayLineClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.LineOrigin = LineOrigin;
	Parms.LineDirection = LineDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RayParameter != nullptr)
		*RayParameter = Parms.RayParameter;

	if (RayPoint != nullptr)
		*RayPoint = std::move(Parms.RayPoint);

	if (LineParameter != nullptr)
		*LineParameter = Parms.LineParameter;

	if (LinePoint != nullptr)
		*LinePoint = std::move(Parms.LinePoint);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_RayFunctions::GetRayClosestPoint(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Ray             Ray                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// double                             HitDistance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Box& Box, double* HitDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayBoxIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.Box = Box;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HitDistance != nullptr)
		*HitDistance = Parms.HitDistance;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
// (None)

class UClass* UGeometryScriptLibrary_BoxFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_BoxFunctions");

	return Clss;
}


// GeometryScriptLibrary_BoxFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_BoxFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_BoxFunctions* UGeometryScriptLibrary_BoxFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_BoxFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_BoxFunctions*>(UGeometryScriptLibrary_BoxFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConsiderOnBoxAsInside                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& Point, bool bConsiderOnBoxAsInside)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestPointInsideBox");

	Params::UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params Parms{};

	Parms.Box = Box;
	Parms.Point = Point;
	Parms.bConsiderOnBoxAsInside = bConsiderOnBoxAsInside;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          SphereCenter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SphereRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& SphereCenter, double SphereRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxSphereIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params Parms{};

	Parms.Box = Box;
	Parms.SphereCenter = SphereCenter;
	Parms.SphereRadius = SphereRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box1                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             Box2                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection(const struct CoreUObject_Box& Box1, const struct CoreUObject_Box& Box2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params Parms{};

	Parms.Box1 = Box1;
	Parms.Box2 = Box2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Dimensions                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize(const struct CoreUObject_Vector& Center, const struct CoreUObject_Vector& Dimensions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterSize");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params Parms{};

	Parms.Center = Center;
	Parms.Dimensions = Dimensions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Extents                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents(const struct CoreUObject_Vector& Center, const struct CoreUObject_Vector& Extents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterExtents");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params Parms{};

	Parms.Center = Center;
	Parms.Extents = Extents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Transform       Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box UGeometryScriptLibrary_BoxFunctions::GetTransformedBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Transform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetTransformedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params Parms{};

	Parms.Box = Box;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ExpandBy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box UGeometryScriptLibrary_BoxFunctions::GetExpandedBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& ExpandBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetExpandedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params Parms{};

	Parms.Box = Box;
	Parms.ExpandBy = ExpandBy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// double                             Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SurfaceArea                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea(const struct CoreUObject_Box& Box, double* Volume, double* SurfaceArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxVolumeArea");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Params Parms{};

	Parms.Box = Box;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	if (SurfaceArea != nullptr)
		*SurfaceArea = Parms.SurfaceArea;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_BoxFunctions::GetBoxPointDistance(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxPointDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params Parms{};

	Parms.Box = Box;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              FaceIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          FaceNormal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter(const struct CoreUObject_Box& Box, int32 FaceIndex, struct CoreUObject_Vector* FaceNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxFaceCenter");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params Parms{};

	Parms.Box = Box;
	Parms.FaceIndex = FaceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FaceNormal != nullptr)
		*FaceNormal = std::move(Parms.FaceNormal);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              CornerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_BoxFunctions::GetBoxCorner(const struct CoreUObject_Box& Box, int32 CornerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxCorner");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params Parms{};

	Parms.Box = Box;
	Parms.CornerIndex = CornerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Center                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Dimensions                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_BoxFunctions::GetBoxCenterSize(const struct CoreUObject_Box& Box, struct CoreUObject_Vector* Center, struct CoreUObject_Vector* Dimensions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxCenterSize");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Params Parms{};

	Parms.Box = Box;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Dimensions != nullptr)
		*Dimensions = std::move(Parms.Dimensions);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box1                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             Box2                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(const struct CoreUObject_Box& Box1, const struct CoreUObject_Box& Box2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxBoxDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params Parms{};

	Parms.Box1 = Box1;
	Parms.Box2 = Box2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsInside                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UGeometryScriptLibrary_BoxFunctions::FindClosestPointOnBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& Point, bool* bIsInside)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindClosestPointOnBox");

	Params::UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params Parms{};

	Parms.Box = Box;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsInside != nullptr)
		*bIsInside = Parms.bIsInside;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Box             Box1                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             Box2                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsIntersecting                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Box             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Box UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection(const struct CoreUObject_Box& Box1, const struct CoreUObject_Box& Box2, bool* bIsIntersecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params Parms{};

	Parms.Box1 = Box1;
	Parms.Box2 = Box2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsIntersecting != nullptr)
		*bIsIntersecting = Parms.bIsIntersecting;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
// (None)

class UClass* UGeometryScriptLibrary_TextureMapFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_TextureMapFunctions");

	return Clss;
}


// GeometryScriptLibrary_TextureMapFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_TextureMapFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_TextureMapFunctions* UGeometryScriptLibrary_TextureMapFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_TextureMapFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_TextureMapFunctions*>(UGeometryScriptLibrary_TextureMapFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSampleTextureOptionsSampleOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_TextureMapFunctions::SampleTextureRenderTarget2DAtUVPositions(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, class UTextureRenderTarget2D* Texture, const struct GeometryScriptingCore_GeometryScriptSampleTextureOptions& SampleOptions, struct GeometryScriptingCore_GeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTextureRenderTarget2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params Parms{};

	Parms.UVList = UVList;
	Parms.Texture = Texture;
	Parms.SampleOptions = SampleOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorList != nullptr)
		*ColorList = std::move(Parms.ColorList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptUVListUVList                                                           (Parm, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptSampleTextureOptionsSampleOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptColorListColorList                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// class UGeometryScriptDebug*        Debug                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_TextureMapFunctions::SampleTexture2DAtUVPositions(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, class UTexture2D* Texture, const struct GeometryScriptingCore_GeometryScriptSampleTextureOptions& SampleOptions, struct GeometryScriptingCore_GeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTexture2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params Parms{};

	Parms.UVList = UVList;
	Parms.Texture = Texture;
	Parms.SampleOptions = SampleOptions;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorList != nullptr)
		*ColorList = std::move(Parms.ColorList);

}


// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
// (None)

class UClass* UGeometryScriptLibrary_VectorMathFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_VectorMathFunctions");

	return Clss;
}


// GeometryScriptLibrary_VectorMathFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_VectorMathFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_VectorMathFunctions* UGeometryScriptLibrary_VectorMathFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_VectorMathFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_VectorMathFunctions*>(UGeometryScriptLibrary_VectorMathFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// double                             ConstantX                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ConstantY                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ConstantZ                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, double ConstantX, double ConstantY, double ConstantZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorToScalar");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.ConstantX = ConstantX;
	Parms.ConstantY = ConstantY;
	Parms.ConstantZ = ConstantZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          SetOnFailure                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace(struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, const struct CoreUObject_Vector& SetOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorNormalizeInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.SetOnFailure = SetOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorLength(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorLength");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListB                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorDot(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorDot");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListB                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorCross(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorCross");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListB                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// double                             ConstantA                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ConstantB                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorListB                                                      (Parm, NativeAccessSpecifierPublic)
// double                             ConstantA                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ConstantB                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorBlend(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// double                             ScalarMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, double ScalarMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.VectorList = VectorList;
	Parms.ScalarMultiplier = ScalarMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// double                             ScalarMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, double ScalarMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.VectorList = VectorList;
	Parms.ScalarMultiplier = ScalarMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListB                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// double                             ConstantMultiplier                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantMultiplier = ConstantMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListB                                                      (Parm, NativeAccessSpecifierPublic)
// double                             ConstantMultiplier                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantMultiplier = ConstantMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// double                             Numerator                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SetOnFailure                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Epsilon                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace(struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvertInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Numerator = Numerator;
	Parms.SetOnFailure = SetOnFailure;
	Parms.Epsilon = Epsilon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// double                             Numerator                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SetOnFailure                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Epsilon                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvert");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Numerator = Numerator;
	Parms.SetOnFailure = SetOnFailure;
	Parms.Epsilon = Epsilon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListB                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// double                             ConstantA                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ConstantB                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListA                                                      (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarListB                                                      (Parm, NativeAccessSpecifierPublic)
// double                             ConstantA                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ConstantB                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace(double Constant, struct GeometryScriptingCore_GeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params Parms{};

	Parms.Constant = Constant;
	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListVectorList                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptVectorListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply(double Constant, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params Parms{};

	Parms.Constant = Constant;
	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace(double Constant, struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params Parms{};

	Parms.Constant = Constant;
	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListScalarList                                                       (Parm, NativeAccessSpecifierPublic)
// struct GeometryScriptingCore_GeometryScriptScalarListReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GeometryScriptingCore_GeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply(double Constant, const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params Parms{};

	Parms.Constant = Constant;
	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


