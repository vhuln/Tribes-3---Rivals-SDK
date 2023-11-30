#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StructUtilsEngine.StructUtilsFunctionLibrary
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStructUtilsFunctionLibrary* GetDefaultObj();

	void SetInstancedStructValue(struct StructUtils_InstancedStruct& InstancedStruct, int32& Value);
	void Reset(struct StructUtils_InstancedStruct& InstancedStruct, class UScriptStruct* StructType);
	bool NotEqual_InstancedStruct(struct StructUtils_InstancedStruct& A, struct StructUtils_InstancedStruct& B);
	struct StructUtils_InstancedStruct MakeInstancedStruct(int32& Value);
	bool IsValid_InstancedStruct(struct StructUtils_InstancedStruct& InstancedStruct);
	enum class EStructUtilsResult IsInstancedStructValid(struct StructUtils_InstancedStruct& InstancedStruct);
	void GetInstancedStructValue(enum class EStructUtilsResult* ExecResult, struct StructUtils_InstancedStruct& InstancedStruct, int32* Value);
	bool EqualEqual_InstancedStruct(struct StructUtils_InstancedStruct& A, struct StructUtils_InstancedStruct& B);
};

}


