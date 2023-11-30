#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_CharPlayer.ALI_CharPlayer_C
class IALI_CharPlayer_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_CharPlayer_C* GetDefaultObj();

	void WeaponLayer(struct Engine_PoseLink* WeaponLayer);
};

}


