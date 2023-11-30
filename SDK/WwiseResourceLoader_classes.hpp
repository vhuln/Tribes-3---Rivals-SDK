#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class WwiseResourceLoader.WwiseEventInfoLibrary
class UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWwiseEventInfoLibrary* GetDefaultObj();

	struct WwiseResourceLoader_WwiseEventInfo SetWwiseShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref, int32 WwiseShortId);
	struct WwiseResourceLoader_WwiseEventInfo SetWwiseName(struct WwiseResourceLoader_WwiseEventInfo& Ref, const class FString& WwiseName);
	struct WwiseResourceLoader_WwiseEventInfo SetWwiseGuid(struct WwiseResourceLoader_WwiseEventInfo& Ref, struct CoreUObject_Guid& WwiseGuid);
	struct WwiseResourceLoader_WwiseEventInfo SetSwitchContainerLoading(struct WwiseResourceLoader_WwiseEventInfo& Ref, enum class EWwiseEventSwitchContainerLoading& SwitchContainerLoading);
	struct WwiseResourceLoader_WwiseEventInfo SetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref, int32 HardCodedSoundBankShortId);
	struct WwiseResourceLoader_WwiseEventInfo SetDestroyOptions(struct WwiseResourceLoader_WwiseEventInfo& Ref, enum class EWwiseEventDestroyOptions& DestroyOptions);
	struct WwiseResourceLoader_WwiseEventInfo MakeStruct(struct CoreUObject_Guid& WwiseGuid, int32 WwiseShortId, const class FString& WwiseName, enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading, enum class EWwiseEventDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId);
	int32 GetWwiseShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref);
	class FString GetWwiseName(struct WwiseResourceLoader_WwiseEventInfo& Ref);
	struct CoreUObject_Guid GetWwiseGuid(struct WwiseResourceLoader_WwiseEventInfo& Ref);
	enum class EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(struct WwiseResourceLoader_WwiseEventInfo& Ref);
	int32 GetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref);
	enum class EWwiseEventDestroyOptions GetDestroyOptions(struct WwiseResourceLoader_WwiseEventInfo& Ref);
	void BreakStruct(const struct WwiseResourceLoader_WwiseEventInfo& Ref, struct CoreUObject_Guid* OutWwiseGuid, int32* OutWwiseShortId, class FString* OutWwiseName, enum class EWwiseEventSwitchContainerLoading* OutSwitchContainerLoading, enum class EWwiseEventDestroyOptions* OutDestroyOptions, int32* OutHardCodedSoundBankShortId);
};

// 0x0 (0x28 - 0x28)
// Class WwiseResourceLoader.WwiseGroupValueInfoLibrary
class UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWwiseGroupValueInfoLibrary* GetDefaultObj();

	struct WwiseResourceLoader_WwiseGroupValueInfo SetWwiseShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, int32 WwiseShortId);
	struct WwiseResourceLoader_WwiseGroupValueInfo SetWwiseName(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, const class FString& WwiseName);
	struct WwiseResourceLoader_WwiseGroupValueInfo SetGroupShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, int32 GroupShortId);
	struct WwiseResourceLoader_WwiseGroupValueInfo SetAssetGuid(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, struct CoreUObject_Guid& AssetGuid);
	struct WwiseResourceLoader_WwiseGroupValueInfo MakeStruct(struct CoreUObject_Guid& AssetGuid, int32 GroupShortId, int32 WwiseShortId, const class FString& WwiseName);
	int32 GetWwiseShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref);
	class FString GetWwiseName(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref);
	int32 GetGroupShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref);
	struct CoreUObject_Guid GetAssetGuid(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref);
	void BreakStruct(const struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, struct CoreUObject_Guid* OutAssetGuid, int32* OutGroupShortId, int32* OutWwiseShortId, class FString* OutWwiseName);
};

// 0x0 (0x28 - 0x28)
// Class WwiseResourceLoader.WwiseObjectInfoLibrary
class UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWwiseObjectInfoLibrary* GetDefaultObj();

	struct WwiseResourceLoader_WwiseObjectInfo SetWwiseShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref, int32 WwiseShortId);
	struct WwiseResourceLoader_WwiseObjectInfo SetWwiseName(struct WwiseResourceLoader_WwiseObjectInfo& Ref, const class FString& WwiseName);
	struct WwiseResourceLoader_WwiseObjectInfo SetWwiseGuid(struct WwiseResourceLoader_WwiseObjectInfo& Ref, struct CoreUObject_Guid& WwiseGuid);
	struct WwiseResourceLoader_WwiseObjectInfo SetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref, int32 HardCodedSoundBankShortId);
	struct WwiseResourceLoader_WwiseObjectInfo MakeStruct(struct CoreUObject_Guid& WwiseGuid, int32 WwiseShortId, const class FString& WwiseName, int32 HardCodedSoundBankShortId);
	int32 GetWwiseShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref);
	class FString GetWwiseName(struct WwiseResourceLoader_WwiseObjectInfo& Ref);
	struct CoreUObject_Guid GetWwiseGuid(struct WwiseResourceLoader_WwiseObjectInfo& Ref);
	int32 GetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref);
	void BreakStruct(const struct WwiseResourceLoader_WwiseObjectInfo& Ref, struct CoreUObject_Guid* OutWwiseGuid, int32* OutWwiseShortId, class FString* OutWwiseName, int32* OutHardCodedSoundBankShortId);
};

}


