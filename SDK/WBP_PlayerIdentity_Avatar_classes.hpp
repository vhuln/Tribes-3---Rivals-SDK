#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x558 - 0x550)
// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C
class UWBP_PlayerIdentity_Avatar_C : public URHWidget
{
public:
	class UWBP_AsyncIcon_C*                      AvatarIcon;                                        // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerIdentity_Avatar_C* GetDefaultObj();

	void SetAvatar(class URHAvatar* Avatar, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue);
};

}


