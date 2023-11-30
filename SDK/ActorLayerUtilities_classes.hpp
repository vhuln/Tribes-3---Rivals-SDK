#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ActorLayerUtilities.LayersBlueprintLibrary
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayersBlueprintLibrary* GetDefaultObj();

	void RemoveActorFromLayer(class AActor* InActor, struct ActorLayerUtilities_ActorLayer& Layer);
	TArray<class AActor*> GetActors(class UObject* WorldContextObject, struct ActorLayerUtilities_ActorLayer& ActorLayer);
	void AddActorToLayer(class AActor* InActor, struct ActorLayerUtilities_ActorLayer& Layer);
};

}


