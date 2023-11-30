#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
class ITypedElementDataStorageCompatibilityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageCompatibilityInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageFactory
class UTypedElementDataStorageFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementDataStorageFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageInterface
class ITypedElementDataStorageInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageUiInterface
class ITypedElementDataStorageUiInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageUiInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementHandleLibrary
class UTypedElementHandleLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementHandleLibrary* GetDefaultObj();

	void Release(struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle);
	bool NotEqual(struct TypedElementFramework_ScriptTypedElementHandle& LHS, struct TypedElementFramework_ScriptTypedElementHandle& RHS);
	bool IsSet(struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle);
	bool Equal(struct TypedElementFramework_ScriptTypedElementHandle& LHS, struct TypedElementFramework_ScriptTypedElementHandle& RHS);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementListLibrary
class UTypedElementListLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementListLibrary* GetDefaultObj();

	void Shrink(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList);
	void Reset(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList);
	void Reserve(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Size);
	bool Remove(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle);
	int32 Num(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList);
	bool IsValidIndex(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Index);
	bool HasElementsOfType(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, class FName ElementTypeName);
	bool HasElements(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType);
	class UObject* GetElementInterface(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle, TSubclassOf<class IInterface> BaseInterfaceType);
	TArray<struct TypedElementFramework_ScriptTypedElementHandle> GetElementHandles(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType);
	struct TypedElementFramework_ScriptTypedElementHandle GetElementHandleAt(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Index);
	void Empty(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Slack);
	struct TypedElementFramework_ScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);
	int32 CountElementsOfType(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, class FName ElementTypeName);
	int32 CountElements(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType);
	bool Contains(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle);
	struct TypedElementFramework_ScriptTypedElementListProxy Clone(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList);
	void AppendList(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, const struct TypedElementFramework_ScriptTypedElementListProxy& OtherElementList);
	void Append(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TArray<struct TypedElementFramework_ScriptTypedElementHandle>& ElementHandles);
	bool Add(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementCounterInterface
class ITypedElementCounterInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementCounterInterface* GetDefaultObj();

};

// 0x950 (0x978 - 0x28)
// Class TypedElementFramework.TypedElementRegistry
class UTypedElementRegistry : public UObject
{
public:
	uint8                                        Pad_4E6[0x950];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTypedElementRegistry* GetDefaultObj();

	class UTypedElementRegistry* GetInstance();
	class UObject* GetElementInterface(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, TSubclassOf<class IInterface> InBaseInterfaceType);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class ITestTypedElementInterfaceA : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceA* GetDefaultObj();

	bool SetDisplayName(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, class FText InNewName, bool bNotify);
	class FText GetDisplayName(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class ITestTypedElementInterfaceB : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceB* GetDefaultObj();

	bool MarkAsTested(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class ITestTypedElementInterfaceC : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceC* GetDefaultObj();

	bool GetIsTested(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_54D[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplTyped* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_55B[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplUntyped* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_564[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceBAndC_Typed* GetDefaultObj();

};

}


