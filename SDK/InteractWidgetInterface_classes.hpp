#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InteractWidgetInterface.InteractWidgetInterface_C
class IInteractWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractWidgetInterface_C* GetDefaultObj();

	void GetWidgetBlockInteractReason(class AValCharacter* Initiator, enum class EInteractionFailureType* Reason);
	void OnInstantActivation(class AController* Controller);
	void OnLiftSummoned(int32 LiftLevel);
	void OnLiftActivated();
	void GetTotalChannelTime(double* ChannelTime);
	void OnChannellingToggled(bool IsChanneling, class AController* Controller, class ABP_WidgetInteraction_C* WidgetInteractionActor);
	void AddChildInteractionActor(class ABP_WidgetInteraction_C* ChildToAdd);
	void OnKeycodeEntered(TArray<int32>& EnteredKeycode, class AActor* InteractingActor);
	void GetKeycode(TArray<int32>* Keycode);
	void GetInteractWidgetType(enum class EInteractWidgetType* Type);
};

}


