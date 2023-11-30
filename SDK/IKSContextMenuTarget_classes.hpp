#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IKSContextMenuTarget.IKSContextMenuTarget_C
class IIKSContextMenuTarget_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIKSContextMenuTarget_C* GetDefaultObj();

	void OnContextMenuOpen(enum class EViewSide Side);
	void OnContextMenuClose();
};

}


