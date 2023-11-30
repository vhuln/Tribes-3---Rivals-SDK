#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass CharacterOverlay_Health.CharacterOverlay_Health_C
class UCharacterOverlay_Health_C : public UUserWidget
{
public:
	class UImage*                                Background;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UValSmoothProgressBar*                 HealthBar;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UValSmoothProgressBar*                 ShieldBar;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCharacterOverlay_Health_C* GetDefaultObj();

	void UpdateHaveHealth(bool Value);
	void UpdateHealthPercent(double Value, double LocalValue, float CallFunc_SetSmoothProgress_NewValue_ImplicitCast);
	void UpdateShieldPercent(double Value, float CallFunc_SetSmoothProgress_NewValue_ImplicitCast);
	void UpdateHaveShield(bool Value);
};

}


