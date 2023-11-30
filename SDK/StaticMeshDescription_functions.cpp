#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StaticMeshDescription.StaticMeshDescription
// (None)

class UClass* UStaticMeshDescription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticMeshDescription");

	return Clss;
}


// StaticMeshDescription StaticMeshDescription.Default__StaticMeshDescription
// (Public, ClassDefaultObject, ArchetypeObject)

class UStaticMeshDescription* UStaticMeshDescription::GetDefaultObj()
{
	static class UStaticMeshDescription* Default = nullptr;

	if (!Default)
		Default = static_cast<UStaticMeshDescription*>(UStaticMeshDescription::StaticClass()->DefaultObject);

	return Default;
}


// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        UV                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UVIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetVertexInstanceUV(const struct MeshDescription_VertexInstanceID& VertexInstanceID, const struct CoreUObject_Vector2D& UV, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");

	Params::UStaticMeshDescription_SetVertexInstanceUV_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.UV = UV;
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MeshDescription_PolygonGroupIDPolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct MeshDescription_PolygonGroupID& PolygonGroupID, class FName& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");

	Params::UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct MeshDescription_VertexInstanceIDVertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UVIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UStaticMeshDescription::GetVertexInstanceUV(const struct MeshDescription_VertexInstanceID& VertexInstanceID, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");

	Params::UStaticMeshDescription_GetVertexInstanceUV_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector          Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          HalfExtents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonGroupIDPolygonGroup                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   PolygonID_PlusX                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   PolygonID_MinusX                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   PolygonID_PlusY                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   PolygonID_MinusY                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   PolygonID_PlusZ                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MeshDescription_PolygonID   PolygonID_MinusZ                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::CreateCube(const struct CoreUObject_Vector& Center, const struct CoreUObject_Vector& HalfExtents, const struct MeshDescription_PolygonGroupID& PolygonGroup, struct MeshDescription_PolygonID* PolygonID_PlusX, struct MeshDescription_PolygonID* PolygonID_MinusX, struct MeshDescription_PolygonID* PolygonID_PlusY, struct MeshDescription_PolygonID* PolygonID_MinusY, struct MeshDescription_PolygonID* PolygonID_PlusZ, struct MeshDescription_PolygonID* PolygonID_MinusZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "CreateCube");

	Params::UStaticMeshDescription_CreateCube_Params Parms{};

	Parms.Center = Center;
	Parms.HalfExtents = HalfExtents;
	Parms.PolygonGroup = PolygonGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = std::move(Parms.PolygonID_PlusX);

	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = std::move(Parms.PolygonID_MinusX);

	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = std::move(Parms.PolygonID_PlusY);

	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = std::move(Parms.PolygonID_MinusY);

	if (PolygonID_PlusZ != nullptr)
		*PolygonID_PlusZ = std::move(Parms.PolygonID_PlusZ);

	if (PolygonID_MinusZ != nullptr)
		*PolygonID_MinusZ = std::move(Parms.PolygonID_MinusZ);

}

}


