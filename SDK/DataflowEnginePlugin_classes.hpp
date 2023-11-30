#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A0 - 0x298)
// Class DataflowEnginePlugin.DataflowActor
class ADataflowActor : public AActor
{
public:
	class UDataflowComponent*                    DataflowComponent;                                 // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADataflowActor* GetDefaultObj();

};

// 0x140 (0x6B0 - 0x570)
// Class DataflowEnginePlugin.DataflowComponent
class UDataflowComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1765[0x140];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDataflowComponent* GetDefaultObj();

};

}


