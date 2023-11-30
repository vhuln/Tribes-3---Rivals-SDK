#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshDescription.MeshDescriptionBase
// (None)

class UClass* UMeshDescriptionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDescriptionBase");

	return Clss;
}


// MeshDescriptionBase MeshDescription.Default__MeshDescriptionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshDescriptionBase* UMeshDescriptionBase::GetDefaultObj()
{
	static class UMeshDescriptionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshDescriptionBase*>(UMeshDescriptionBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::SetVertexPosition(const struct MeshDescription_VertexID& VertexID, struct CoreUObject_Vector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetVertexPosition");

	Params::UMeshDescriptionBase_SetVertexPosition_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>VertexInstanceIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::SetPolygonVertexInstances(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_VertexInstanceID>& VertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonVertexInstances");

	Params::UMeshDescriptionBase_SetPolygonVertexInstances_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::SetPolygonPolygonGroup(const struct MeshDescription_PolygonID& PolygonID, const struct MeshDescription_PolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_SetPolygonPolygonGroup_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReversePolygonFacing(const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReversePolygonFacing");

	Params::UMeshDescriptionBase_ReversePolygonFacing_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertices                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewVertices(int32 NumberOfNewVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertices");

	Params::UMeshDescriptionBase_ReserveNewVertices_Params Parms{};

	Parms.NumberOfNewVertices = NumberOfNewVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertexInstances                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewVertexInstances(int32 NumberOfNewVertexInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertexInstances");

	Params::UMeshDescriptionBase_ReserveNewVertexInstances_Params Parms{};

	Parms.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewTriangles                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewTriangles(int32 NumberOfNewTriangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewTriangles");

	Params::UMeshDescriptionBase_ReserveNewTriangles_Params Parms{};

	Parms.NumberOfNewTriangles = NumberOfNewTriangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygons                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewPolygons(int32 NumberOfNewPolygons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygons");

	Params::UMeshDescriptionBase_ReserveNewPolygons_Params Parms{};

	Parms.NumberOfNewPolygons = NumberOfNewPolygons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygonGroups                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygonGroups");

	Params::UMeshDescriptionBase_ReserveNewPolygonGroups_Params Parms{};

	Parms.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewEdges                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewEdges(int32 NumberOfNewEdges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewEdges");

	Params::UMeshDescriptionBase_ReserveNewEdges_Params Parms{};

	Parms.NumberOfNewEdges = NumberOfNewEdges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsVertexValid(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexValid");

	Params::UMeshDescriptionBase_IsVertexValid_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsVertexOrphaned(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexOrphaned");

	Params::UMeshDescriptionBase_IsVertexOrphaned_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsVertexInstanceValid(const struct MeshDescription_VertexInstanceID& VertexInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexInstanceValid");

	Params::UMeshDescriptionBase_IsVertexInstanceValid_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsTriangleValid(const struct MeshDescription_TriangleID& TriangleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTriangleValid");

	Params::UMeshDescriptionBase_IsTriangleValid_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsTrianglePartOfNgon(const struct MeshDescription_TriangleID& TriangleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTrianglePartOfNgon");

	Params::UMeshDescriptionBase_IsTrianglePartOfNgon_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsPolygonValid(const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonValid");

	Params::UMeshDescriptionBase_IsPolygonValid_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsPolygonGroupValid(const struct MeshDescription_PolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonGroupValid");

	Params::UMeshDescriptionBase_IsPolygonGroupValid_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEmpty");

	Params::UMeshDescriptionBase_IsEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEdgeValid(const struct MeshDescription_EdgeID& EdgeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeValid");

	Params::UMeshDescriptionBase_IsEdgeValid_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEdgeInternalToPolygon(const struct MeshDescription_EdgeID& EdgeID, const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternalToPolygon");

	Params::UMeshDescriptionBase_IsEdgeInternalToPolygon_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEdgeInternal(const struct MeshDescription_EdgeID& EdgeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternal");

	Params::UMeshDescriptionBase_IsEdgeInternal_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>OutVertexInstanceIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexVertexInstances(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_VertexInstanceID>* OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexVertexInstances");

	Params::UMeshDescriptionBase_GetVertexVertexInstances_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = std::move(Parms.OutVertexInstanceIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UMeshDescriptionBase::GetVertexPosition(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPosition");

	Params::UMeshDescriptionBase_GetVertexPosition_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID0                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    VertexID1                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_EdgeID      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_EdgeID UMeshDescriptionBase::GetVertexPairEdge(const struct MeshDescription_VertexID& VertexID0, const struct MeshDescription_VertexID& VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPairEdge");

	Params::UMeshDescriptionBase_GetVertexPairEdge_Params Parms{};

	Parms.VertexID0 = VertexID0;
	Parms.VertexID1 = VertexID1;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_VertexID UMeshDescriptionBase::GetVertexInstanceVertex(const struct MeshDescription_VertexInstanceID& VertexInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceVertex_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID0                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexInstanceIDVertexInstanceID1                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_EdgeID      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_EdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(const struct MeshDescription_VertexInstanceID& VertexInstanceID0, const struct MeshDescription_VertexInstanceID& VertexInstanceID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstancePairEdge");

	Params::UMeshDescriptionBase_GetVertexInstancePairEdge_Params Parms{};

	Parms.VertexInstanceID0 = VertexInstanceID0;
	Parms.VertexInstanceID1 = VertexInstanceID1;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexInstanceIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_VertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct MeshDescription_TriangleID& TriangleID, const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForTriangleVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexInstanceIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_VertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct MeshDescription_PolygonID& PolygonID, const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForPolygonVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetVertexInstanceCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceCount");

	Params::UMeshDescriptionBase_GetVertexInstanceCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_TriangleID>OutConnectedTriangleIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct MeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct MeshDescription_TriangleID>* OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = std::move(Parms.OutConnectedTriangleIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_PolygonID>OutConnectedPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct MeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct MeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetVertexCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexCount");

	Params::UMeshDescriptionBase_GetVertexCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_TriangleID>OutConnectedTriangleIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexConnectedTriangles(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_TriangleID>* OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexConnectedTriangles_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = std::move(Parms.OutConnectedTriangleIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_PolygonID>OutConnectedPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexConnectedPolygons(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexConnectedPolygons_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>OutEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexConnectedEdges(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetVertexConnectedEdges_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexID>OutAdjacentVertexIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexAdjacentVertices(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_VertexID>* OutAdjacentVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexAdjacentVertices");

	Params::UMeshDescriptionBase_GetVertexAdjacentVertices_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = std::move(Parms.OutAdjacentVertexIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexID>OutVertexIDs                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleVertices(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_VertexID>* OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertices");

	Params::UMeshDescriptionBase_GetTriangleVertices_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = std::move(Parms.OutVertexIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>OutVertexInstanceIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleVertexInstances(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_VertexInstanceID>* OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstances");

	Params::UMeshDescriptionBase_GetTriangleVertexInstances_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = std::move(Parms.OutVertexInstanceIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexInstanceIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_VertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(const struct MeshDescription_TriangleID& TriangleID, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstance");

	Params::UMeshDescriptionBase_GetTriangleVertexInstance_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonGroupIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_PolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(const struct MeshDescription_TriangleID& TriangleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygonGroup");

	Params::UMeshDescriptionBase_GetTrianglePolygonGroup_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_PolygonID UMeshDescriptionBase::GetTrianglePolygon(const struct MeshDescription_TriangleID& TriangleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygon");

	Params::UMeshDescriptionBase_GetTrianglePolygon_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>OutEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleEdges(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleEdges");

	Params::UMeshDescriptionBase_GetTriangleEdges_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetTriangleCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleCount");

	Params::UMeshDescriptionBase_GetTriangleCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_TriangleID>OutTriangleIDs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_TriangleID>* OutTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleAdjacentTriangles");

	Params::UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = std::move(Parms.OutTriangleIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexID>OutVertexIDs                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonVertices(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_VertexID>* OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertices");

	Params::UMeshDescriptionBase_GetPolygonVertices_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = std::move(Parms.OutVertexIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>OutVertexInstanceIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonVertexInstances(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_VertexInstanceID>* OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertexInstances");

	Params::UMeshDescriptionBase_GetPolygonVertexInstances_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = std::move(Parms.OutVertexInstanceIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_TriangleID>OutTriangleIDs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonTriangles(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_TriangleID>* OutTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonTriangles");

	Params::UMeshDescriptionBase_GetPolygonTriangles_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = std::move(Parms.OutTriangleIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonGroupIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_PolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_GetPolygonPolygonGroup_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>OutEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonPerimeterEdges(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPerimeterEdges");

	Params::UMeshDescriptionBase_GetPolygonPerimeterEdges_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>OutEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonInternalEdges(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetPolygonInternalEdges_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_PolygonID>OutPolygonIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonGroupPolygons(const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_PolygonID>* OutPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetPolygonGroupPolygons_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = std::move(Parms.OutPolygonIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetPolygonGroupCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupCount");

	Params::UMeshDescriptionBase_GetPolygonGroupCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetPolygonCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonCount");

	Params::UMeshDescriptionBase_GetPolygonCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_PolygonID>OutPolygonIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_PolygonID>* OutPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonAdjacentPolygons");

	Params::UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = std::move(Parms.OutPolygonIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumVertexVertexInstances(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexVertexInstances");

	Params::UMeshDescriptionBase_GetNumVertexVertexInstances_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct MeshDescription_VertexInstanceID& VertexInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct MeshDescription_VertexInstanceID& VertexInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumVertexConnectedTriangles(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumVertexConnectedPolygons(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumVertexConnectedEdges(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetNumVertexConnectedEdges_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumPolygonVertices(const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonVertices");

	Params::UMeshDescriptionBase_GetNumPolygonVertices_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumPolygonTriangles(const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonTriangles");

	Params::UMeshDescriptionBase_GetNumPolygonTriangles_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumPolygonInternalEdges(const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetNumPolygonInternalEdges_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumPolygonGroupPolygons(const struct MeshDescription_PolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct MeshDescription_EdgeID& EdgeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct MeshDescription_EdgeID& EdgeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexID>OutVertexIDs                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetEdgeVertices(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_VertexID>* OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertices");

	Params::UMeshDescriptionBase_GetEdgeVertices_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = std::move(Parms.OutVertexIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VertexNumber                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_VertexID UMeshDescriptionBase::GetEdgeVertex(const struct MeshDescription_EdgeID& EdgeID, int32 VertexNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertex");

	Params::UMeshDescriptionBase_GetEdgeVertex_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.VertexNumber = VertexNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshDescriptionBase::GetEdgeCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeCount");

	Params::UMeshDescriptionBase_GetEdgeCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_TriangleID>OutConnectedTriangleIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetEdgeConnectedTriangles(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_TriangleID>* OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetEdgeConnectedTriangles_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = std::move(Parms.OutConnectedTriangleIDs);

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_PolygonID>OutConnectedPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetEdgeConnectedPolygons(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetEdgeConnectedPolygons_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);

}


// Function MeshDescription.MeshDescriptionBase.Empty
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UMeshDescriptionBase::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "Empty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexID>OrphanedVertices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteVertexInstance(const struct MeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct MeshDescription_VertexID>* OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertexInstance");

	Params::UMeshDescriptionBase_DeleteVertexInstance_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = std::move(Parms.OrphanedVertices);

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteVertex(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertex");

	Params::UMeshDescriptionBase_DeleteVertex_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>OrphanedEdges                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>OrphanedVertexInstances                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_PolygonGroupID>OrphanedPolygonGroupsPtr                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteTriangle(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_EdgeID>* OrphanedEdges, TArray<struct MeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct MeshDescription_PolygonGroupID>* OrphanedPolygonGroupsPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteTriangle");

	Params::UMeshDescriptionBase_DeleteTriangle_Params Parms{};

	Parms.TriangleID = TriangleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = std::move(Parms.OrphanedEdges);

	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = std::move(Parms.OrphanedVertexInstances);

	if (OrphanedPolygonGroupsPtr != nullptr)
		*OrphanedPolygonGroupsPtr = std::move(Parms.OrphanedPolygonGroupsPtr);

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeletePolygonGroup(const struct MeshDescription_PolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygonGroup");

	Params::UMeshDescriptionBase_DeletePolygonGroup_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>OrphanedEdges                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>OrphanedVertexInstances                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_PolygonGroupID>OrphanedPolygonGroups                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeletePolygon(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_EdgeID>* OrphanedEdges, TArray<struct MeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct MeshDescription_PolygonGroupID>* OrphanedPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygon");

	Params::UMeshDescriptionBase_DeletePolygon_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = std::move(Parms.OrphanedEdges);

	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = std::move(Parms.OrphanedVertexInstances);

	if (OrphanedPolygonGroups != nullptr)
		*OrphanedPolygonGroups = std::move(Parms.OrphanedPolygonGroups);

}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexID>OrphanedVertices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteEdge(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_VertexID>* OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteEdge");

	Params::UMeshDescriptionBase_DeleteEdge_Params Parms{};

	Parms.EdgeID = EdgeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = std::move(Parms.OrphanedVertices);

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateVertexWithID(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexWithID");

	Params::UMeshDescriptionBase_CreateVertexWithID_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateVertexInstanceWithID(const struct MeshDescription_VertexInstanceID& VertexInstanceID, const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstanceWithID");

	Params::UMeshDescriptionBase_CreateVertexInstanceWithID_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexID    VertexID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexInstanceIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_VertexInstanceID UMeshDescriptionBase::CreateVertexInstance(const struct MeshDescription_VertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstance");

	Params::UMeshDescriptionBase_CreateVertexInstance_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexID    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_VertexID UMeshDescriptionBase::CreateVertex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertex");

	Params::UMeshDescriptionBase_CreateVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_TriangleID  TriangleID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>VertexInstanceIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>NewEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateTriangleWithID(const struct MeshDescription_TriangleID& TriangleID, const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>& VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangleWithID");

	Params::UMeshDescriptionBase_CreateTriangleWithID_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.PolygonGroupID = PolygonGroupID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>VertexInstanceIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>NewEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct MeshDescription_TriangleID  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_TriangleID UMeshDescriptionBase::CreateTriangle(const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>& VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangle");

	Params::UMeshDescriptionBase_CreateTriangle_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>VertexInstanceIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>NewEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreatePolygonWithID(const struct MeshDescription_PolygonID& PolygonID, const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonWithID");

	Params::UMeshDescriptionBase_CreatePolygonWithID_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreatePolygonGroupWithID(const struct MeshDescription_PolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroupWithID");

	Params::UMeshDescriptionBase_CreatePolygonGroupWithID_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonGroupIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_PolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroup");

	Params::UMeshDescriptionBase_CreatePolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_VertexInstanceID>VertexInstanceIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct MeshDescription_EdgeID>NewEdgeIDs                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_PolygonID UMeshDescriptionBase::CreatePolygon(const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygon");

	Params::UMeshDescriptionBase_CreatePolygon_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_EdgeID      EdgeID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    VertexID0                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    VertexID1                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateEdgeWithID(const struct MeshDescription_EdgeID& EdgeID, const struct MeshDescription_VertexID& VertexID0, const struct MeshDescription_VertexID& VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdgeWithID");

	Params::UMeshDescriptionBase_CreateEdgeWithID_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.VertexID0 = VertexID0;
	Parms.VertexID1 = VertexID1;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexID    VertexID0                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_VertexID    VertexID1                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_EdgeID      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MeshDescription_EdgeID UMeshDescriptionBase::CreateEdge(const struct MeshDescription_VertexID& VertexID0, const struct MeshDescription_VertexID& VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdge");

	Params::UMeshDescriptionBase_CreateEdge_Params Parms{};

	Parms.VertexID0 = VertexID0;
	Parms.VertexID1 = VertexID1;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonID   PolygonID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ComputePolygonTriangulation(const struct MeshDescription_PolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ComputePolygonTriangulation");

	Params::UMeshDescriptionBase_ComputePolygonTriangulation_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MeshDescription.MeshDescriptionBaseBulkData
// (None)

class UClass* UMeshDescriptionBaseBulkData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDescriptionBaseBulkData");

	return Clss;
}


// MeshDescriptionBaseBulkData MeshDescription.Default__MeshDescriptionBaseBulkData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshDescriptionBaseBulkData* UMeshDescriptionBaseBulkData::GetDefaultObj()
{
	static class UMeshDescriptionBaseBulkData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshDescriptionBaseBulkData*>(UMeshDescriptionBaseBulkData::StaticClass()->DefaultObject);

	return Default;
}

}


