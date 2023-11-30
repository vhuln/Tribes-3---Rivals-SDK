#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x118 - 0x100)
// Class ControlRig.ControlRigShapeLibraryLink
class UControlRigShapeLibraryLink : public UNameSpacedUserData
{
public:
	class UControlRigShapeLibrary*               ShapeLibrary;                                      // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ShapeNames;                                        // 0x108(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UControlRigShapeLibraryLink* GetDefaultObj();

	void SetShapeLibrary(class UControlRigShapeLibrary* InShapeLibrary);
	class UControlRigShapeLibrary* GetShapeLibrary();
};

// 0x358 (0x380 - 0x28)
// Class ControlRig.RigHierarchy
class URigHierarchy : public UObject
{
public:
	uint8                                        Pad_43B7[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            ModifiedEventDynamic;                              // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43B8[0x48];                                    // Fixing Size After Last Property  
	uint16                                       TopologyVersion;                                   // 0x98(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       MetadataVersion;                                   // 0x9A(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       MetadataTagVersion;                                // 0x9C(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableDirtyPropagation;                           // 0x9E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43BA[0x99];                                    // Fixing Size After Last Property  
	int32                                        TransformStackIndex;                               // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43BC[0x74];                                    // Fixing Size After Last Property  
	class URigHierarchyController*               HierarchyController;                               // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43BD[0x58];                                    // Fixing Size After Last Property  
	TMap<struct ControlRig_RigElementKey, struct ControlRig_RigElementKey> PreviousNameMap;                                   // 0x210(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_43BE[0x80];                                    // Fixing Size After Last Property  
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2E0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43BF[0x98];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URigHierarchy* GetDefaultObj();

	void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
	void UnsetCurveValue(const struct ControlRig_RigElementKey& InKey, bool bSetupUndo);
	bool SwitchToWorldSpace(const struct ControlRig_RigElementKey& InChild, bool bInitial, bool bAffectChildren);
	bool SwitchToParent(const struct ControlRig_RigElementKey& InChild, const struct ControlRig_RigElementKey& InParent, bool bInitial, bool bAffectChildren);
	bool SwitchToDefaultParent(const struct ControlRig_RigElementKey& InChild, bool bInitial, bool bAffectChildren);
	TArray<struct ControlRig_RigElementKey> SortKeys(TArray<struct ControlRig_RigElementKey>& InKeys);
	bool SetVectorMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Vector& InValue);
	bool SetVectorArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<struct CoreUObject_Vector>& InValue);
	bool SetTransformMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Transform& InValue);
	bool SetTransformArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<struct CoreUObject_Transform>& InValue);
	bool SetTag(const struct ControlRig_RigElementKey& InItem, class FName InTag);
	bool SetRotatorMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Rotator& InValue);
	bool SetRotatorArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<struct CoreUObject_Rotator>& InValue);
	bool SetRigElementKeyMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct ControlRig_RigElementKey& InValue);
	bool SetRigElementKeyArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<struct ControlRig_RigElementKey>& InValue);
	bool SetQuatMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Quat& InValue);
	bool SetQuatArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<struct CoreUObject_Quat>& InValue);
	void SetPose_ForBlueprint(const struct ControlRig_RigPose& InPose);
	bool SetParentWeightArray(const struct ControlRig_RigElementKey& InChild, const TArray<struct ControlRig_RigElementWeight>& InWeights, bool bInitial, bool bAffectChildren);
	bool SetParentWeight(const struct ControlRig_RigElementKey& InChild, const struct ControlRig_RigElementKey& InParent, const struct ControlRig_RigElementWeight& InWeight, bool bInitial, bool bAffectChildren);
	bool SetNameMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, class FName InValue);
	bool SetNameArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& InValue);
	void SetLocalTransformByIndex(int32 InElementIndex, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetLocalTransform(const struct ControlRig_RigElementKey& InKey, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetLinearColorMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_LinearColor& InValue);
	bool SetLinearColorArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<struct CoreUObject_LinearColor>& InValue);
	bool SetInt32Metadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, int32 InValue);
	bool SetInt32ArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<int32>& InValue);
	void SetGlobalTransformByIndex(int32 InElementIndex, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	void SetGlobalTransform(const struct ControlRig_RigElementKey& InKey, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetFloatMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, float InValue);
	bool SetFloatArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<float>& InValue);
	void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
	void SetCurveValue(const struct ControlRig_RigElementKey& InKey, float InValue, bool bSetupUndo);
	void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
	void SetControlVisibility(const struct ControlRig_RigElementKey& InKey, bool bVisibility);
	void SetControlValueByIndex(int32 InElementIndex, const struct ControlRig_RigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlValue(const struct ControlRig_RigElementKey& InKey, const struct ControlRig_RigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlShapeTransformByIndex(int32 InElementIndex, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlShapeTransform(const struct ControlRig_RigElementKey& InKey, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlSettingsByIndex(int32 InElementIndex, const struct ControlRig_RigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlSettings(const struct ControlRig_RigElementKey& InKey, const struct ControlRig_RigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlPreferredRotatorByIndex(int32 InElementIndex, struct CoreUObject_Rotator& InRotator, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredRotator(const struct ControlRig_RigElementKey& InKey, struct CoreUObject_Rotator& InRotator, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredRotationOrderByIndex(int32 InElementIndex, enum class EEulerRotationOrder InRotationOrder);
	void SetControlPreferredRotationOrder(const struct ControlRig_RigElementKey& InKey, enum class EEulerRotationOrder InRotationOrder);
	void SetControlPreferredEulerAnglesByIndex(int32 InElementIndex, struct CoreUObject_Vector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredEulerAngles(const struct ControlRig_RigElementKey& InKey, struct CoreUObject_Vector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips);
	void SetControlOffsetTransformByIndex(int32 InElementIndex, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlOffsetTransform(const struct ControlRig_RigElementKey& InKey, const struct CoreUObject_Transform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetBoolMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, bool InValue);
	bool SetBoolArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const TArray<bool>& InValue);
	void SendAutoKeyEvent(const struct ControlRig_RigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
	void ResetToDefault();
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter);
	void ResetCurveValues();
	void Reset();
	bool RemoveMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	bool RemoveAllMetadata(const struct ControlRig_RigElementKey& InItem);
	int32 Num();
	struct ControlRig_RigControlValue MakeControlValueFromVector2D(const struct CoreUObject_Vector2D& InValue);
	struct ControlRig_RigControlValue MakeControlValueFromVector(const struct CoreUObject_Vector& InValue);
	struct ControlRig_RigControlValue MakeControlValueFromTransformNoScale(const struct AnimationCore_TransformNoScale& InValue);
	struct ControlRig_RigControlValue MakeControlValueFromTransform(const struct CoreUObject_Transform& InValue);
	struct ControlRig_RigControlValue MakeControlValueFromRotator(const struct CoreUObject_Rotator& InValue);
	struct ControlRig_RigControlValue MakeControlValueFromInt(int32 InValue);
	struct ControlRig_RigControlValue MakeControlValueFromFloat(float InValue);
	struct ControlRig_RigControlValue MakeControlValueFromEulerTransform(const struct AnimationCore_EulerTransform& InValue);
	struct ControlRig_RigControlValue MakeControlValueFromBool(bool InValue);
	bool IsValidIndex(int32 InElementIndex);
	bool IsSelectedByIndex(int32 InIndex);
	bool IsSelected(const struct ControlRig_RigElementKey& InKey);
	bool IsProcedural(struct ControlRig_RigElementKey& InKey);
	bool IsParentedTo(const struct ControlRig_RigElementKey& InChild, const struct ControlRig_RigElementKey& InParent);
	bool IsCurveValueSetByIndex(int32 InElementIndex);
	bool IsCurveValueSet(const struct ControlRig_RigElementKey& InKey);
	bool IsControllerAvailable();
	bool HasTag(const struct ControlRig_RigElementKey& InItem, class FName InTag);
	struct CoreUObject_Vector GetVectorMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Vector& DefaultValue);
	struct CoreUObject_Vector GetVectorFromControlValue(const struct ControlRig_RigControlValue& InValue);
	TArray<struct CoreUObject_Vector> GetVectorArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	struct CoreUObject_Vector2D GetVector2DFromControlValue(const struct ControlRig_RigControlValue& InValue);
	struct AnimationCore_TransformNoScale GetTransformNoScaleFromControlValue(const struct ControlRig_RigControlValue& InValue);
	struct CoreUObject_Transform GetTransformMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Transform& DefaultValue);
	struct CoreUObject_Transform GetTransformFromControlValue(const struct ControlRig_RigControlValue& InValue);
	TArray<struct CoreUObject_Transform> GetTransformArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	TArray<class FName> GetTags(const struct ControlRig_RigElementKey& InItem);
	TArray<struct ControlRig_RigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter);
	struct CoreUObject_Rotator GetRotatorMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Rotator& DefaultValue);
	struct CoreUObject_Rotator GetRotatorFromControlValue(const struct ControlRig_RigControlValue& InValue);
	TArray<struct CoreUObject_Rotator> GetRotatorArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	TArray<struct ControlRig_RigElementKey> GetRootElementKeys();
	TArray<struct ControlRig_RigElementKey> GetRigidBodyKeys(bool bTraverse);
	struct ControlRig_RigElementKey GetRigElementKeyMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct ControlRig_RigElementKey& DefaultValue);
	TArray<struct ControlRig_RigElementKey> GetRigElementKeyArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	TArray<struct ControlRig_RigElementKey> GetReferenceKeys(bool bTraverse);
	struct CoreUObject_Quat GetQuatMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_Quat& DefaultValue);
	TArray<struct CoreUObject_Quat> GetQuatArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	struct ControlRig_RigElementKey GetPreviousParent(struct ControlRig_RigElementKey& InKey);
	class FName GetPreviousName(struct ControlRig_RigElementKey& InKey);
	struct ControlRig_RigPose GetPose(bool bInitial);
	TArray<struct ControlRig_RigElementWeight> GetParentWeightArray(const struct ControlRig_RigElementKey& InChild, bool bInitial);
	struct ControlRig_RigElementWeight GetParentWeight(const struct ControlRig_RigElementKey& InChild, const struct ControlRig_RigElementKey& InParent, bool bInitial);
	struct CoreUObject_Transform GetParentTransformByIndex(int32 InElementIndex, bool bInitial);
	struct CoreUObject_Transform GetParentTransform(const struct ControlRig_RigElementKey& InKey, bool bInitial);
	TArray<struct ControlRig_RigElementKey> GetParents(const struct ControlRig_RigElementKey& InKey, bool bRecursive);
	int32 GetNumberOfParents(const struct ControlRig_RigElementKey& InKey);
	TArray<struct ControlRig_RigElementKey> GetNullKeys(bool bTraverse);
	class FName GetNameMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, class FName DefaultValue);
	TArray<class FName> GetNameArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	enum class ERigMetadataType GetMetadataType(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	TArray<class FName> GetMetadataNames(const struct ControlRig_RigElementKey& InItem);
	struct CoreUObject_Transform GetLocalTransformByIndex(int32 InElementIndex, bool bInitial);
	struct CoreUObject_Transform GetLocalTransform(const struct ControlRig_RigElementKey& InKey, bool bInitial);
	int32 GetLocalIndex_ForBlueprint(const struct ControlRig_RigElementKey& InKey);
	struct CoreUObject_Transform GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
	struct CoreUObject_Transform GetLocalControlShapeTransform(const struct ControlRig_RigElementKey& InKey, bool bInitial);
	struct CoreUObject_LinearColor GetLinearColorMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, const struct CoreUObject_LinearColor& DefaultValue);
	TArray<struct CoreUObject_LinearColor> GetLinearColorArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	TArray<struct ControlRig_RigElementKey> GetKeys(const TArray<int32>& InElementIndices);
	struct ControlRig_RigElementKey GetKey(int32 InElementIndex);
	int32 GetIntFromControlValue(const struct ControlRig_RigControlValue& InValue);
	int32 GetInt32Metadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, int32 DefaultValue);
	TArray<int32> GetInt32ArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	int32 GetIndex_ForBlueprint(const struct ControlRig_RigElementKey& InKey);
	struct CoreUObject_Transform GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial);
	struct CoreUObject_Transform GetGlobalTransform(const struct ControlRig_RigElementKey& InKey, bool bInitial);
	struct CoreUObject_Transform GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
	struct CoreUObject_Transform GetGlobalControlShapeTransform(const struct ControlRig_RigElementKey& InKey, bool bInitial);
	struct CoreUObject_Transform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial);
	struct CoreUObject_Transform GetGlobalControlOffsetTransform(const struct ControlRig_RigElementKey& InKey, bool bInitial);
	float GetFloatMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, float DefaultValue);
	float GetFloatFromControlValue(const struct ControlRig_RigControlValue& InValue);
	TArray<float> GetFloatArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	struct ControlRig_RigElementKey GetFirstParent(const struct ControlRig_RigElementKey& InKey);
	struct AnimationCore_EulerTransform GetEulerTransformFromControlValue(const struct ControlRig_RigControlValue& InValue);
	struct ControlRig_RigElementKey GetDefaultParent(const struct ControlRig_RigElementKey& InKey);
	float GetCurveValueByIndex(int32 InElementIndex);
	float GetCurveValue(const struct ControlRig_RigElementKey& InKey);
	TArray<struct ControlRig_RigElementKey> GetCurveKeys();
	struct ControlRig_RigControlValue GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType);
	struct ControlRig_RigControlValue GetControlValue(const struct ControlRig_RigElementKey& InKey, enum class ERigControlValueType InValueType);
	struct CoreUObject_Rotator GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial);
	struct CoreUObject_Rotator GetControlPreferredRotator(const struct ControlRig_RigElementKey& InKey, bool bInitial);
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32 InElementIndex, bool bFromSettings);
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrder(const struct ControlRig_RigElementKey& InKey, bool bFromSettings);
	struct CoreUObject_Vector GetControlPreferredEulerAnglesByIndex(int32 InElementIndex, enum class EEulerRotationOrder InRotationOrder, bool bInitial);
	struct CoreUObject_Vector GetControlPreferredEulerAngles(const struct ControlRig_RigElementKey& InKey, enum class EEulerRotationOrder InRotationOrder, bool bInitial);
	class URigHierarchyController* GetController(bool bCreateIfNeeded);
	TArray<struct ControlRig_RigElementKey> GetControlKeys(bool bTraverse);
	TArray<struct ControlRig_RigElementKey> GetChildren(const struct ControlRig_RigElementKey& InKey, bool bRecursive);
	bool GetBoolMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName, bool DefaultValue);
	TArray<bool> GetBoolArrayMetadata(const struct ControlRig_RigElementKey& InItem, class FName InMetadataName);
	TArray<struct ControlRig_RigElementKey> GetBoneKeys(bool bTraverse);
	TArray<struct ControlRig_RigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
	struct ControlRig_RigNullElement FindNull_ForBlueprintOnly(struct ControlRig_RigElementKey& InKey);
	struct ControlRig_RigControlElement FindControl_ForBlueprintOnly(struct ControlRig_RigElementKey& InKey);
	struct ControlRig_RigBoneElement FindBone_ForBlueprintOnly(struct ControlRig_RigElementKey& InKey);
	void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
	void CopyHierarchy(class URigHierarchy* InHierarchy);
	bool Contains_ForBlueprint(const struct ControlRig_RigElementKey& InKey);
};

// 0x30 (0x88 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTransformableControlHandle* GetDefaultObj();

};

// 0x2D8 (0x610 - 0x338)
// Class ControlRig.ControlRig
class UControlRig : public URigVMHost
{
public:
	uint8                                        Pad_4450[0x8];                                     // Fixing Size After Last Property  
	enum class ERigExecutionType                 ExecutionType;                                     // 0x340(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4451[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigHierarchySettings       HierarchySettings;                                 // 0x344(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	TMap<struct ControlRig_RigElementKey, struct ControlRig_RigControlElementCustomization> ControlCustomizations;                             // 0x348(0x50)(Protected, NativeAccessSpecifierProtected)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x398(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x3A0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           ShapeLibraryNameMap;                               // 0x3B0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4452[0x18];                                    // Fixing Size After Last Property  
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x418(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4453[0x90];                                    // Fixing Size After Last Property  
	struct ControlRig_RigInfluenceMapPerEvent    Influences;                                        // 0x4B0(0x60)(NativeAccessSpecifierPrivate)
	class UControlRig*                           InteractionRig;                                    // 0x510(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               InteractionRigClass;                               // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4456[0xD0];                                    // Fixing Size After Last Property  
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x5F0(0x1)(InstancedReference, BlueprintAssignable, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4457[0x1F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
	void SetInteractionRig(class UControlRig* InInteractionRig);
	void SelectControl(class FName& InControlName, bool bSelect);
	void RequestConstruction();
	void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, struct ControlRig_RigControlElement& Control, bool bSelected);
	bool IsControlSelected(class FName& InControlName);
	TSubclassOf<class UControlRig> GetInteractionRigClass();
	class UControlRig* GetInteractionRig();
	class AActor* GetHostingActor();
	class URigHierarchy* GetHierarchy();
	TArray<class UControlRig*> FindControlRigs(class UObject* Outer, TSubclassOf<class UControlRig> OptionalClass);
	TArray<class FName> CurrentControlSelection();
	class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer, class FName& ControlName);
	bool ClearControlSelection();
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_4459[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigAnimInstance* GetDefaultObj();

};

// 0x0 (0x390 - 0x390)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj();

};

// 0x160 (0x6D0 - 0x570)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x578(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x588(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x598(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x5A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x5B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x5C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ControlRigComponentMappedElement> UserDefinedElements;                               // 0x5D8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ControlRigComponentMappedElement> MappedElements;                                    // 0x5E8(0x10)(Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bEnableLazyEvaluation;                             // 0x5F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_458B[0x3];                                     // Fixing Size After Last Property  
	float                                        LazyEvaluationPositionThreshold;                   // 0x5FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationRotationThreshold;                   // 0x600(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationScaleThreshold;                      // 0x604(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetTransformBeforeTick;                         // 0x608(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x609(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateRigOnTick;                                  // 0x60A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0x60B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawBones;                                        // 0x60C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugDrawing;                                 // 0x60D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4590[0x2];                                     // Fixing Size After Last Property  
	class UControlRig*                           ControlRig;                                        // 0x610(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4592[0xB8];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	void Update(float DeltaTime);
	void SetObjectBinding(class UObject* InObjectToBind);
	void SetMappedElements(const TArray<struct ControlRig_ControlRigComponentMappedElement>& NewMappedElements);
	void SetInitialSpaceTransform(class FName SpaceName, const struct CoreUObject_Transform& InitialTransform, enum class EControlRigComponentSpace Space);
	void SetInitialBoneTransform(class FName BoneName, const struct CoreUObject_Transform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);
	void SetControlVector2D(class FName ControlName, const struct CoreUObject_Vector2D& Value);
	void SetControlTransform(class FName ControlName, const struct CoreUObject_Transform& Value, enum class EControlRigComponentSpace Space);
	void SetControlScale(class FName ControlName, const struct CoreUObject_Vector& Value, enum class EControlRigComponentSpace Space);
	void SetControlRotator(class FName ControlName, const struct CoreUObject_Rotator& Value, enum class EControlRigComponentSpace Space);
	void SetControlRigClass(TSubclassOf<class UControlRig> InControlRigClass);
	void SetControlPosition(class FName ControlName, const struct CoreUObject_Vector& Value, enum class EControlRigComponentSpace Space);
	void SetControlOffset(class FName ControlName, const struct CoreUObject_Transform& OffsetTransform, enum class EControlRigComponentSpace Space);
	void SetControlInt(class FName ControlName, int32 Value);
	void SetControlFloat(class FName ControlName, float Value);
	void SetControlBool(class FName ControlName, bool Value);
	void SetBoneTransform(class FName BoneName, const struct CoreUObject_Transform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void OnPreInitialize(class UControlRigComponent* Component);
	void OnPreForwardsSolve(class UControlRigComponent* Component);
	void OnPreConstruction(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void OnPostForwardsSolve(class UControlRigComponent* Component);
	void OnPostConstruction(class UControlRigComponent* Component);
	void Initialize();
	struct CoreUObject_Transform GetSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct CoreUObject_Transform GetInitialSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct CoreUObject_Transform GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	TArray<class FName> GetElementNames(enum class ERigElementType ElementType);
	struct CoreUObject_Vector2D GetControlVector2D(class FName ControlName);
	struct CoreUObject_Transform GetControlTransform(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct CoreUObject_Vector GetControlScale(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct CoreUObject_Rotator GetControlRotator(class FName ControlName, enum class EControlRigComponentSpace Space);
	class UControlRig* GetControlRig();
	struct CoreUObject_Vector GetControlPosition(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct CoreUObject_Transform GetControlOffset(class FName ControlName, enum class EControlRigComponentSpace Space);
	int32 GetControlInt(class FName ControlName);
	float GetControlFloat(class FName ControlName);
	bool GetControlBool(class FName ControlName);
	struct CoreUObject_Transform GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	float GetAbsoluteTime();
	bool DoesElementExist(class FName Name, enum class ERigElementType ElementType);
	void ClearMappedElements();
	bool CanExecute();
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct ControlRig_ControlRigComponentMappedBone>& Bones, const TArray<struct ControlRig_ControlRigComponentMappedCurve>& Curves);
	void AddMappedElements(const TArray<struct ControlRig_ControlRigComponentMappedElement>& NewMappedElements);
	void AddMappedComponents(const TArray<struct ControlRig_ControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0xB0 (0x348 - 0x298)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshOnTick;                                    // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelectable;                                     // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B4[0x6];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    MaterialOverride;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ColorParameter;                                    // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadows;                                      // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B6[0x7];                                     // Fixing Size After Last Property  
	class USceneComponent*                       ActorRootComponent;                                // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x2D8(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ControlNames;                                      // 0x300(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct CoreUObject_Transform>         ShapeTransforms;                                   // 0x310(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x320(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x330(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  ColorParameterName;                                // 0x340(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AControlRigControlActor* GetDefaultObj();

	void ResetControlActor();
	void Refresh();
	void Clear();
};

// 0x48 (0x2E0 - 0x298)
// Class ControlRig.ControlRigShapeActor
class AControlRigShapeActor : public AActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ControlRigIndex;                                   // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x2AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x2B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ShapeName;                                         // 0x2BC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ColorParameterName;                                // 0x2C4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45F0[0x10];                                    // Fixing Size After Last Property  
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x2DC(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x2DC(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45F2[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AControlRigShapeActor* GetDefaultObj();

	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	void SetGlobalTransform(struct CoreUObject_Transform& InTransform);
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(struct CoreUObject_Transform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
	bool IsSelectedInEditor();
	bool IsHovered();
	bool IsEnabled();
	struct CoreUObject_Transform GetGlobalTransform();
};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigShapeLibrary
class UControlRigShapeLibrary : public UObject
{
public:
	uint8                                        Pad_45FF[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigShapeDefinition  DefaultShape;                                      // 0x30(0xA0)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xD0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0xF8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialColorParameter;                            // 0x120(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ControlRigShapeDefinition> Shapes;                                            // 0x128(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4605[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigShapeLibrary* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigTestData
class UControlRigTestData : public UObject
{
public:
	struct CoreUObject_SoftObjectPath            ControlRigObjectPath;                              // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_ControlRigTestDataFrame    Initial;                                           // 0x48(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ControlRigTestDataFrame> InputFrames;                                       // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ControlRigTestDataFrame> OutputFrames;                                      // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                FramesToSkip;                                      // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_461C[0x40];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigTestData* GetDefaultObj();

	bool SetupReplay(class UControlRig* InControlRig, bool bGroundTruth);
	void ReleaseReplay();
	bool Record(class UControlRig* InControlRig, double InRecordingDuration);
	bool IsReplaying();
	bool IsRecording();
	struct CoreUObject_Vector2D GetTimeRange(bool bInput);
	enum class EControlRigTestDataPlaybackMode GetPlaybackMode();
	int32 GetFrameIndexForTime(double InSeconds, bool bInput);
	class UControlRigTestData* CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName);
};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_461D[0x30];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigValidator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigValidationPass
class UControlRigValidationPass : public UObject
{
public:

	static class UClass* StaticClass();
	static class UControlRigValidationPass* GetDefaultObj();

};

// 0x10 (0x620 - 0x610)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_4628[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x40 (0x650 - 0x610)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x610(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_462D[0x2F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_470E[0x3];                                     // Fixing Size After Last Property  
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_470F[0x6C];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URigHierarchyController* GetDefaultObj();

	bool SetSelection(TArray<struct ControlRig_RigElementKey>& InKeys, bool bPrintPythonCommand);
	bool SetParent(const struct ControlRig_RigElementKey& InChild, const struct ControlRig_RigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	void SetHierarchy(class URigHierarchy* InHierarchy);
	class FName SetDisplayName(const struct ControlRig_RigElementKey& InControl, class FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetControlSettings(const struct ControlRig_RigElementKey& InKey, const struct ControlRig_RigControlSettings& InSettings, bool bSetupUndo);
	bool SelectElement(const struct ControlRig_RigElementKey& InKey, bool bSelect, bool bClearSelection);
	bool ReorderElement(const struct ControlRig_RigElementKey& InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand);
	struct ControlRig_RigElementKey RenameElement(const struct ControlRig_RigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
	bool RemoveParent(const struct ControlRig_RigElementKey& InChild, const struct ControlRig_RigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveElement(const struct ControlRig_RigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveAllParents(const struct ControlRig_RigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct ControlRig_RigElementKey> MirrorElements(const TArray<struct ControlRig_RigElementKey>& InKeys, const struct RigVM_RigVMMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct ControlRig_RigElementKey> ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct ControlRig_RigElementKey> ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct ControlRig_RigElementKey> ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
	class URigHierarchy* GetHierarchy();
	struct ControlRig_RigControlSettings GetControlSettings(const struct ControlRig_RigElementKey& InKey);
	class FString ExportToText(const TArray<struct ControlRig_RigElementKey>& InKeys);
	class FString ExportSelectionToText();
	TArray<struct ControlRig_RigElementKey> DuplicateElements(const TArray<struct ControlRig_RigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	bool DeselectElement(const struct ControlRig_RigElementKey& InKey);
	bool ClearSelection();
	struct ControlRig_RigElementKey AddRigidBody(class FName InName, const struct ControlRig_RigElementKey& InParent, const struct ControlRig_RigRigidBodySettings& InSettings, const struct CoreUObject_Transform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool AddParent(const struct ControlRig_RigElementKey& InChild, const struct ControlRig_RigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
	struct ControlRig_RigElementKey AddNull(class FName InName, const struct ControlRig_RigElementKey& InParent, const struct CoreUObject_Transform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
	struct ControlRig_RigElementKey AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
	struct ControlRig_RigElementKey AddControl_ForBlueprint(class FName InName, const struct ControlRig_RigElementKey& InParent, const struct ControlRig_RigControlSettings& InSettings, const struct ControlRig_RigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand);
	struct ControlRig_RigElementKey AddBone(class FName InName, const struct ControlRig_RigElementKey& InParent, const struct CoreUObject_Transform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
	struct ControlRig_RigElementKey AddAnimationChannel_ForBlueprint(class FName InName, const struct ControlRig_RigElementKey& InParentControl, const struct ControlRig_RigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_471E[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x278 (0x3D0 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_4734[0x48];                                    // Fixing Size After Last Property  
	class UControlRig*                           ControlRig;                                        // 0x1A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x1A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 ControlsMask;                                      // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct MovieSceneTracks_MovieSceneTransformMask TransformMask;                                     // 0x1C0(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4735[0x4];                                     // Fixing Size After Last Property  
	struct MovieScene_MovieSceneFloatChannel     Weight;                                            // 0x1C8(0x110)(NativeAccessSpecifierPublic)
	TMap<class FName, struct ControlRig_ChannelMapInfo> ControlChannelMap;                                 // 0x2D8(0x50)(NativeAccessSpecifierPublic)
	TArray<struct ControlRig_EnumParameterNameAndCurve> EnumParameterNamesAndCurves;                       // 0x328(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct ControlRig_IntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x338(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct ControlRig_SpaceControlNameAndChannel> SpaceChannels;                                     // 0x348(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct Constraints_ConstraintAndActiveChannel> ConstraintsChannels;                               // 0x358(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4736[0x68];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0xB8 (0x150 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_4738[0x40];                                    // Fixing Size After Last Property  
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct ControlRig_ControlRotationOrder> ControlsRotationOrder;                             // 0x100(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterTrack* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigEditorSettings
class UControlRigEditorSettings : public URigVMEditorSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigEditorSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ControlRig.ControlRigPoseAsset
class UControlRigPoseAsset : public UObject
{
public:
	struct ControlRig_ControlRigControlPose      Pose;                                              // 0x28(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigPoseAsset* GetDefaultObj();

	void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
	void SavePose(class UControlRig* InControlRig, bool bUseAll);
	void ReplaceControlName(class FName& CurrentName, class FName& NewName);
	void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
	void GetCurrentPose(class UControlRig* InControlRig, struct ControlRig_ControlRigControlPose* OutPose);
	TArray<class FName> GetControlNames();
	bool DoesMirrorMatch(class UControlRig* ControlRig, class FName& ControlName);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeftSide;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4752[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigPoseMirrorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct CoreUObject_DirectoryPath>     RootSaveDirs;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigPoseProjectSettings* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Selection;                                         // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigWorkflowOptions* GetDefaultObj();

	bool EnsureAtLeastOneRigElementSelected();
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4757[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UControlRigTransformWorkflowOptions* GetDefaultObj();

	TArray<struct RigVM_RigVMUserWorkflow> ProvideWorkflows(class UObject* InSubject);
};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_475F[0x1];                                     // Fixing Size After Last Property  
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EventNameB;                                        // 0x44(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4763[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_RigPose                    Pose;                                              // 0x50(0x70)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

}


