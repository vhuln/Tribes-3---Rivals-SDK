#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x5F8 - 0x5B0)
// Class TopazUI.TopRHWidget_WheelSelector
class UTopRHWidget_WheelSelector : public UValRHWidget
{
public:
	int32                                        EntryNum;                                          // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC2[0x4];                                      // Fixing Size After Last Property  
	TSubclassOf<class UTopRHWidget_WheelSelector_Entry> EntryClass;                                        // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseDeadzone;                                     // 0x5C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GamepadDeadzone;                                   // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlay*                              RadialSelector;                                    // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ImageContainer;                                    // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<float>                                CachedAngle;                                       // 0x5D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AValCharacter*                         CachedCharacter;                                   // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedIndex;                                       // 0x5F0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD0[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTopRHWidget_WheelSelector* GetDefaultObj();

	void UpdateRadialSelector(float Angle, bool bShow);
	void UpdateEntriesAngle();
	void TryBindCharacter();
	void ToggleLockLookInput(bool bLock);
	void SpawnEntries();
	void OnIndexChanged(int32 NewIndex);
	void OnEntriesSpawned();
	void OnCharacterBound();
	int32 GetRadialSelectionMouse(float InMouseDeadzone, float* OUTAngle);
	int32 GetRadialSelectionConsole(float* OUTAngle);
	void BPOnShown();
	void BPOnHide();
	void BindCharacter(class APawn* Pawn);
};

// 0x0 (0x5B0 - 0x5B0)
// Class TopazUI.TopRHWidget_WheelSelector_Entry
class UTopRHWidget_WheelSelector_Entry : public UValRHWidget
{
public:

	static class UClass* StaticClass();
	static class UTopRHWidget_WheelSelector_Entry* GetDefaultObj();

	void UpdateCounterRotation(float Angle);
	void ToggleHighlighted(bool bHighlighted);
	void OnSelected();
};

}


