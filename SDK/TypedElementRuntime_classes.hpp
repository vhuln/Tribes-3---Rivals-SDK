#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSetLibrary
class UTypedElementSelectionSetLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementSelectionSetLibrary* GetDefaultObj();

	bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, const struct TypedElementRuntime_TypedElementSelectionOptions& SelectionOptions);
	bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, const struct TypedElementRuntime_TypedElementSelectionOptions& SelectionOptions);
	struct TypedElementFramework_ScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct TypedElementRuntime_TypedElementSelectionNormalizationOptions& NormalizationOptions);
	struct TypedElementFramework_ScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, const struct TypedElementRuntime_TypedElementSelectionNormalizationOptions& NormalizationOptions);
	bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, const struct TypedElementRuntime_TypedElementSelectionOptions& SelectionOptions);
};

// 0x870 (0x898 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSet
class UTypedElementSelectionSet : public UObject
{
public:
	uint8                                        Pad_5C1[0x800];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnPreSelectionChange;                              // 0x828(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectionChange;                                 // 0x838(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C3[0x50];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTypedElementSelectionSet* GetDefaultObj();

	bool SetSelection(TArray<struct TypedElementFramework_ScriptTypedElementHandle>& InElementHandles, const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool SelectElements(TArray<struct TypedElementFramework_ScriptTypedElementHandle>& InElementHandles, const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool SelectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	void RestoreSelectionState(struct TypedElementRuntime_TypedElementSelectionSetState& InSelectionState);
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	TArray<struct TypedElementFramework_ScriptTypedElementHandle> K2_GetSelectedElementHandles(TSubclassOf<class IInterface> InBaseInterfaceType);
	bool IsElementSelected(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementRuntime_TypedElementIsSelectedOptions& InSelectionOptions);
	bool HasSelectedObjects(class UClass* InRequiredClass);
	bool HasSelectedElements(TSubclassOf<class IInterface> InBaseInterfaceType);
	class UObject* GetTopSelectedObject(class UClass* InRequiredClass);
	struct TypedElementFramework_ScriptTypedElementHandle GetSelectionElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod);
	TArray<class UObject*> GetSelectedObjects(class UClass* InRequiredClass);
	int32 GetNumSelectedElements();
	struct TypedElementRuntime_TypedElementSelectionSetState GetCurrentSelectionState();
	class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);
	bool DeselectElements(TArray<struct TypedElementFramework_ScriptTypedElementHandle>& InElementHandles, const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool DeselectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	int32 CountSelectedObjects(class UClass* InRequiredClass);
	int32 CountSelectedElements(TSubclassOf<class IInterface> InBaseInterfaceType);
	bool ClearSelection(const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool CanSelectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool CanDeselectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool AllowSelectionModifiers(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementAssetDataInterface
class ITypedElementAssetDataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementAssetDataInterface* GetDefaultObj();

	struct CoreUObject_AssetData GetAssetData(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
	TArray<struct CoreUObject_AssetData> GetAllReferencedAssetDatas(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementHierarchyInterface
class ITypedElementHierarchyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementHierarchyInterface* GetDefaultObj();

	struct TypedElementFramework_ScriptTypedElementHandle GetParentElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, bool bAllowCreate);
	void GetChildElements(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, TArray<struct TypedElementFramework_ScriptTypedElementHandle>* OutElementHandles, bool bAllowCreate);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementObjectInterface
class ITypedElementObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementObjectInterface* GetDefaultObj();

	class UClass* GetObjectClass(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
	class UObject* GetObject(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
class ITypedElementPrimitiveCustomDataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementPrimitiveCustomDataInterface* GetDefaultObj();

	void SetCustomDataValue(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
	void SetCustomData(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionInterface
class ITypedElementSelectionInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementSelectionInterface* GetDefaultObj();

	bool SelectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementFramework_ScriptTypedElementListProxy& InSelectionSet, struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool IsElementSelected(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementFramework_ScriptTypedElementListProxy& InSelectionSet, struct TypedElementRuntime_TypedElementIsSelectedOptions& InSelectionOptions);
	struct TypedElementFramework_ScriptTypedElementHandle GetSelectionElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementFramework_ScriptTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod);
	bool DeselectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementFramework_ScriptTypedElementListProxy& InSelectionSet, struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool CanSelectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool CanDeselectElement(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, struct TypedElementRuntime_TypedElementSelectionOptions& InSelectionOptions);
	bool AllowSelectionModifiers(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, const struct TypedElementFramework_ScriptTypedElementListProxy& InSelectionSet);
};

}


